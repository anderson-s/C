/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int codigo;
    float vetor[5], valor;
    
    printf("Digite um código\n 0 - Encerrar o programa \n 1 - Vetor ordem direta \n 2 - Vetor ordem inversa \n");
    scanf("%d", &codigo);
        
    if(codigo != 0){
       for(int i = 0; i < 5; i++){
            printf("Digite um valor no vetor: ");
            scanf("%f", &valor);
            vetor[i] = valor;
        }
        if(codigo == 1){
            for(int aux = 0; aux < 5; aux++){
                printf("vetor[%d] = %f \n", aux, vetor[aux]);
             }
      
        }
        if(codigo == 2){
            for(int aux = 5; aux >= 0; aux--){
            printf("vetor[%d] = %f \n", aux, vetor[aux]);
        }
    }
    }
    else{
     printf("Programa encerrado");   
    }
}