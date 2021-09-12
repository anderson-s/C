#include <stdio.h>

int main()
{
    int minimo, maximo;
    float media;
    printf("Digite a quantidade mínima: ");
    scanf("%d", &minimo);
    printf("Digite a quantidade maxima: ");
    scanf("%d", &maximo);
    
//    %d --> Se refere ao tipo inteiro
//    %f --> Se refere ao tipo float
    
    media = (maximo + minimo)/2;
    
    printf("Digite a quantidade maxima: %.2f", media);
    //%.2f --> se refere a apenas duas casas decimais
    
}


