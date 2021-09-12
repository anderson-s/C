/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[5], par[5], aux = 0;
    
    for(int i = 0; i < 5; i++){
        printf("Digie os valores que irão ser adicionados no vetor");
        scanf("%d", &vetor[i]);
        if((vetor[i] % 2 == 0) && (vetor[i] > 0)){
            par[aux] = vetor[i];
            aux = aux + 1;
        }
    }
    for(int contar = 0;contar < aux; contar++){
        printf("vetor[%d] = %d\n", contar, par[contar]);
    }
    
}
