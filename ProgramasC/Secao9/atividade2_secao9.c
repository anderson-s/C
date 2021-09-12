/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10], soma[10], valor;
    
    printf("Primeiro vetor\n");
    for(int primeiro = 0; primeiro < 10; primeiro++){
        printf("Digite um valor");
        scanf("%d", &valor);
        vetor1[primeiro] = valor;
    }
    printf("Segundo vetor\n");
    for(int segundo = 0; segundo < 10; segundo++){
        printf("Digite um valor");
        scanf("%d", &valor);
        vetor2[segundo] = valor;
    }
    for(int terceiro = 0; terceiro < 10; terceiro++){
        soma[terceiro] = (vetor1[terceiro] + vetor2[terceiro]);
        printf("soma[%d] = %d\n", terceiro, soma[terceiro]);
    }
    
}
