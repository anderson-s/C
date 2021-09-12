/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a;
    printf("Digite o valor!");
    scanf("%d", &a);
    
    
    if(a % 2 == 0){
        printf("O valor %d é par\n", a);
    }
    else{
        printf("O valor %d é impar\n", a);
    }
    if(a > 0){
        printf("O valor %d é positivo\n", a);
    }
    
    else{
        printf("O valor %d é negativo\n", a);
    }
}

