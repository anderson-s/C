/******************************************************************************
A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre salário, idade e número de filhos. 
Faça um programa que leia esses dados de 20 pessoas, calcule e mostre: 
a) a média de salário da população;
b) a média do número de filhos; 
c) o maior salário; 
d) o percentual de mulheres com salário superior a R$1000,00.

                    Atividade Resolvida pelo Professor
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct{
    int filhos;
    int idade;
    float salario;
} habitante;

#define QTDE_HAB 20

int main()
{
    printf("=======================================================================\n");
    printf("Salve salve, voçê está acessando a resolução da atividade 01 de Struct!\n");
    printf("=======================================================================\n\n");
    habitante h[QTDE_HAB];
    float soma_sal = 0;
    float media_sal;
    float soma_filhos = 0;
    float media_filhos;
    float maior_s = -1.0;
    int cont = 0;
    float percentual;
   
    for(int i = 0; i < QTDE_HAB; i++){
        printf("----- Habitante %d -----\n ", i + 1);
        printf("\tDigite o salário: ");
        scanf("%f", &h[i].salario);
        printf("\tDigite a idade: ");
        scanf("%d", &h[i].idade);
        printf("\tDigite a quantidade de filhos: ");
        scanf("%d", &h[i].filhos);
        printf("\n");
    }
    for(int i = 0; i < QTDE_HAB; i++){
        soma_sal = soma_sal + h[i].salario;
        soma_filhos = soma_filhos + h[i].filhos;
        if(h[i].salario > maior_s){
            maior_s = h[i].salario;
        }
        if(h[i].salario > 1000.00){
            cont++;
        }
    }
    media_sal = soma_sal/QTDE_HAB;
    media_filhos = soma_filhos/QTDE_HAB;
    percentual = (cont/(float)QTDE_HAB) * 100;
    printf("##### Relatório Final #####\n");
    printf("---------------------------\n");
    printf("\ta) Média salários: %.2f\n", media_sal);
    printf("\tb) Média de filhos: %.2f\n", media_filhos);
    printf("\tc) Maior salário: %.2f\n", maior_s);
    printf("\td) Qtde de salários maiores que R$1000.00: %.2f\n", percentual);
   return 0;
}
