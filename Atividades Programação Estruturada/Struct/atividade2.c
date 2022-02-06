/******************************************************************************
Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número da conta, 
nome do cliente e saldo. O banco permitirá o cadastramento de apenas quinze contas e não poderá haver mais 
que uma conta com o mesmo número. Crie o menu de opções a seguir: 
1. Cadastrar contas; 
2. Visualizar todas as contas de determinado cliente;
3. Excluir ultima conta da lista;
4. Sair.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct{
    int numero;
    char nome[60];
    float saldo;
} Contas;

int main()
{
    printf("==================================================================\n");
    printf("Salve salve, voçê está acessando a atividade com sistema bancário!\n");
    printf("==================================================================\n\n");
    int opcao;
    char nome[60];
    int num = 0;
    int comparar = 0;
    int contador = 0;
    bool sair = false;
    Contas informacoes[15];
    while(sair == false){
        
  printf("-----Selecione o que deseja: -----\n");
  printf("\t1 - Cadastrar contas\n");
  printf("\t2 - Visualizar todas as contas de determinado cliente\n");
  printf("\t3 - Excluir ultima conta da lista\n");
  printf("\t4 - Sair\n");
  printf("----Opção: ");
  scanf("%d", &opcao);
   
  switch(opcao){
        case 1:
            if(contador < 15){
                printf("\t-----Cadastrar conta %d-----\n", contador + 1);
                 if(contador == 0){
                    printf("\t\t- número da conta: ");
                    scanf("%d", &informacoes[contador].numero);
                    printf("\t\t- Nome da pessoa: ");
                    getchar();
                    fgets(informacoes[contador].nome, sizeof(informacoes[contador].nome), stdin);
                    printf("\t\t- Adicionar saldo: ");
                    scanf("%f", &informacoes[contador].saldo);
                    printf("\t-----Conta cadastrada com sucesso!-----\n");
                    printf("\n");
                    contador++;
                }
                else{
                    printf("\t\t- número da conta: ");
                    scanf("%d", &num);
                    for(int i = 0; i < contador; i++){
                        if(num == informacoes[i].numero){
                            printf("\t-----Este número já cadastrado em outra conta!-----\n\n");
                            break;
                        }
                        else if(num != informacoes[i].numero){
                            if(i == (contador - 1)){
                              informacoes[contador].numero = num;
                              printf("\t\t- Nome da pessoa: ");
                              getchar();
                              fgets(informacoes[contador].nome, sizeof(informacoes[contador].nome), stdin);
                              printf("\t\t- Adicionar saldo: ");
                              scanf("%f", &informacoes[contador].saldo);
                              contador++;
                              printf("\t-----Conta cadastrada com sucesso!-----");
                              printf("\n");
                                break;
                            }
                            
                        }
                }
                }
                
           }
            else{
             printf("\t-----O limite de cadastros foi atingido!-----\n");
            }
            
            break;
        case 2:
            if(contador == 0){
              printf("\t-----Nenhuma conta foi cadastrada!-----\n\n"); 
            }
            else{
                 printf("\t-----Procurar por nome do usuário-----\n");
                 printf("\t\t- Nome da pessoa: ");
                 getchar();
                 fgets(nome, sizeof(nome), stdin);
               
                 for(int i = 0; i < contador; i++){
                    int usuario = 0;
                    comparar = strcmp(nome, informacoes[i].nome);
                    if(comparar == 0){
                        printf("\tQuantidade de contas cadastradas com esse usuário: %d \n", usuario + 1);
                        usuario++;
                        printf("\t\t-----Conta %d -----\n", usuario);
                        printf("\t\t\t- Número da conta: %d\n", informacoes[i].numero);
                        printf("\t\t\t- Nome da pessoa: %s", informacoes[i].nome);
                        printf("\t\t\t- Saldo: R$ %.2f \n", informacoes[i].saldo);
                    }else if((comparar != 0) && (i == (contador - 1))){
                        printf("\t-----Nenhuma conta foi encontrada!-----\n\n");
                        break;
                    }
                 }
                 
                
            }
            printf("\n");
            break;
        case 3:
            //Por se tratar do último indice do vetor, não exite a necessidade de sobrescreve-lo com os dados de outro indice
            //em uma estrutura de repetição. Por isso, apenas vou diminuir o contador para que o último elemento não ser visualizado.
            if(contador == 0){
              printf("\t-----Não há cadastros para serem retirados!-----\n\n"); 
            }
            else{
                contador--;
                printf("\t-----Último elemento removido com sucesso!-----\n\n");    
            }
            break;
        case 4:
            printf("\tLogout efetuado com sucesso.\n\tObrigado por usar nosso sistema!!!\n");
            sair = 1;
            break;
        default:
            printf("\t-----Opção inválida-----\n\n");
  }
        
    }
   
   return 0;
}
