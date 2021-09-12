/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], valor, aux = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        vetor[i] = valor;
        
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] > 50){
            printf("Valor maior que 50 na posição do vetor[%d] = %d \n", i, vetor[i]);
            aux = aux + 1;
        }
      
    }
    if(aux == 0){
        printf("Não possuem valores maiores que 50");
    }
    
}



