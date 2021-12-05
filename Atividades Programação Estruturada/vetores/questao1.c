//Escreva um programa que recebe um vetor de 10 elementos do usuário e escreve a média dos valores no vetor.

#include <stdio.h>

int main()
{
    int vetor[10], soma = 0;
    float media;
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    
    media = soma/10;
    printf("A média é da soma do vetor é: %2.f\n", media);
    return 0;
}
