/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float poluicao;
    printf("Digite o valor!");
    scanf("%f", &poluicao);
    
    if(poluicao < 0.3){
        printf("Níveis aceitáveis");
        
    }
    if(poluicao >= 0.3 && poluicao < 0.4){
        printf("Grupo 1 - Suspender atividades");
    }
    
    if(poluicao >= 0.4 && poluicao < 0.5){
        printf("Grupo 1 e Grupo - Suspender atividades");
    }
    if(poluicao >= 0.5){
        printf("Grupo 1,2 e 3 - Paralisar atividades");
    }
}

