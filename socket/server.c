#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 150

int main()
{

    struct sockaddr_in caddr;
    // Parametros de conexão do socket
    struct sockaddr_in saddr =
        {
            .sin_family = AF_INET,                // Permite a comunicação através do protocolo IP e endereços da internet
            .sin_addr.s_addr = htonl(INADDR_ANY), // Atribuindo endereço
            .sin_port = htons(5000),              // Definindo a porta
        };

    // Criando o socket -> Passando o dominio, tipo e protocolo
    int server = socket(AF_INET, SOCK_STREAM, 0); // Definindo o tipo do socket, sequencial e seguro em ambos os sentidos.(TCP)
    int sizeSaddr = sizeof(saddr);                // Tamanho do struct

    // Fixando o protocolo no sistema
    bind(server, (struct sockaddr *)&saddr, sizeSaddr);

    // Deixando o servidor apto para receber solicitações
    listen(server, 4); // Definindo 4 conexões simultâneas
    int csize = sizeof(caddr);

    int client;
    char buff[BUFFER_SIZE];
    // Aceitando comunicação
    client = accept(server, (struct sockaddr *)&caddr, &csize);
    while (1)
    {
        memset(buff, 0, sizeof(buff)); // Limpar o buffer
        // Receber a mensagem do cliente
        recv(client, buff, sizeof buff, 0);
        printf("\nCliente: %s", buff);

        if (strcmp(buff, "sair\n") == 0 || strcmp(buff, "SAIR\n") == 0)
        {
            printf("Encerrando servidor...\n");
            break;
        }

        // Enviar mensagem para o cliente
        char msg[BUFFER_SIZE] = "";
        printf("Digite a mensagem: ");
        fgets(msg, BUFFER_SIZE, stdin);
        
        send(client, msg, strlen(msg), 0);
        memset(msg, 0, sizeof(msg)); // Limpar o buffer
    }
    close(client);
    close(server);
    return 0;
}
