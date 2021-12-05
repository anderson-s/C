//Escreva um programa que recebe um vetor de 10 elementos do usuário e 
//diz qual o maior número e qual o menor número do vetor.


#include <stdio.h>

int main()
{
    int vetor[10], maior, menor;
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        
    }
    maior = vetor[0];
    menor = vetor[0];
    
    for(int i = 0; i < 10; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }
    printf("O maior é: %d\n", maior);
    printf("O menor é: %d\n", menor);
    return 0;
}
