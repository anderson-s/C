/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[20], valor, soma = 0;
    
    for(int i = 0; i < 20; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        vetor[i] = valor;
        
    }
    for(int i = 0; i < 20; i++){
       printf("vetor[%d] = %d \n", i, vetor[i]);
       soma = (soma + vetor[i]);
    }
    
    printf("O resultado da soma é: %d",soma);
    
}


