/******************************************************************************
Escreva um programa que recebe uma matriz 2x3 do usuário e diga qual o maior número e qual o menor número da matriz.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][3], maior, menor;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    menor = matriz[0][0];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(maior < matriz[i][j]){
            maior = matriz[i][j];
        } 
        if(menor > matriz[i][j]){
            menor = matriz[i][j];
        }
        }
        
        
    }
    printf("O maior é: %d\n", maior);
    printf("O menor é: %d\n", menor);
}
