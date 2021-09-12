/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  float peixe, excesso, multa;
    printf("Digite quantos quilos de peixe você pegou!");
    scanf("%f", &peixe);
    
    if(peixe > 50){
        excesso = peixe - 50;
        multa  = excesso * 4.0; 
        printf("O valor da multa é de R$: %.2f", multa);
    }

    else{
        excesso = 0;
        multa = 0;
       printf("Você não vai precisar pagar multa"); 
    }
}
