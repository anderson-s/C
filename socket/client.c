#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 150

int main()
{
    int client = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_addr =
        {
            .sin_family = AF_INET,
            // .sin_addr.s_addr = htonl(INADDR_ANY),
            .sin_addr.s_addr = inet_addr("10.14.11.97"), // IP do servidor
            .sin_port = htons(5000),                     // Porta do servidor
        };

    int connection_status = connect(client, (struct sockaddr *)&server_addr, sizeof(server_addr));
    if (connection_status == -1)
    {
        perror("Erro de conexão");
        return 1;
    }

    char buff[BUFFER_SIZE];
    char server_response[BUFFER_SIZE];

    while (1)
    {
        // Enviar mensagem
        printf("Digite a mensagem (ou 'sair' para encerrar): ");
        fgets(buff, BUFFER_SIZE, stdin);

        send(client, buff, strlen(buff), 0);

        if (strcmp(buff, "sair\n") == 0 || strcmp(buff, "SAIR\n") == 0)
        {
            printf("Encerrando cliente...\n");
            break;
        }

        memset(buff, 0, sizeof(buff)); // Limpar o buffer

        // Receber mensagem do servidor
        recv(client, server_response, sizeof(server_response), 0);
        printf("Servidor: %s", server_response);
    }

    close(client);

    return 0;
}
