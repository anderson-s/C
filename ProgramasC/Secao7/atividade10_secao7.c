/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int idade;
    
    printf("Digite a idade: \n");
    scanf("%d", &idade);
        
        if(idade  < 7){
	        printf("Não pertence a nenhum grupo");
	        
	    }
	    if(idade  >= 5 && idade  <= 7){
	        printf("Infantil A");
	        
	    }
	    if(idade  > 7 && idade  <= 11){
	        printf("Infantil B");
	        
	    }
	    if(idade  > 11 && idade  <= 13){
	        printf("Juvenil A");
	        
	    }
	    if(idade  > 13 && idade  < 18){
	        printf("Juvenil B");
	        
	    }
	    if(idade >= 18){
	    	printf("Grupo Adulto");
	    }
}


