/******************************************************************************

Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. 
Calcule e mostre a união de X com Y. Isto é, um vetor que contenha os valores de X seguidos dos valores de Y.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int x[10],  y[10], z[20], cont = 0;
    printf("Vetor x: \n");
    
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &x[i]);
    }
    printf("\n");
    printf("Vetor y: \n");
    
    for(int j = 0; j < 10; j++){
        printf("Digite um valor: ");
        scanf("%d", &y[j]);
    }
    printf("\n");
    for(int i = 0; i < 20; i++){
        if(i <= 9){
            z[i] = x[i];    
        }
        else{
            z[i] = y[cont]; 
            cont = cont + 1;
        }

    }
    printf("\n");
    printf("A junção dos digitados é: \n");
    for(int i = 0; i < 20; i++){
        printf("%d", z[i]);
    }
    return 0;
}
