/******************************************************************************
Escreva um programa que recebe um matriz 3x4 do usuário e escreve a média dos valores na matriz.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float matriz[3][4], soma = 0, media = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%f", &matriz[i][j]);
            soma = matriz[i][j] + soma;
        }
    }
    media = soma/12;
    printf("A média é: %.2f \n", media);
}
