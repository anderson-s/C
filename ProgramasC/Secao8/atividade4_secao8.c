/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int valor, maior = -999, menor = 999, soma = 0;
    float media;
    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if(valor > 0){
            if(valor > maior){
                maior = valor;
            }
            if(valor < menor){
                menor = valor;
            }
            soma = valor + soma;
        }
        else{
            i--;
        }
    }
    media = soma/10;
    printf("O valor da soma é %d\n", soma);
    printf("O maior valor é %d\n", maior);
    printf("O menor valor é %d\n", menor);
    printf("O valor da média é %.2f\n", media);
}




