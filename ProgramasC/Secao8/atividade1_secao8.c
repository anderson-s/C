/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int valor, maior = 0;
    printf("Digite um valor ou 0 para encerrar o programa: ");
    scanf("%d", &valor);
    
    while(valor != 0){
        if(valor > maior){
            maior = valor;
        }
        printf("Digite um valor ou 0 para encerrar o programa: ");
        scanf("%d", &valor);
    }
    printf("O maior valor digitado foi: %d", maior);
}


