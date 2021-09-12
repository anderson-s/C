/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a,b,c,d, p1,p2,p3,p4;
    printf("Digite o primeiro valor!");
    scanf("%d", &a);
    printf("Digite o segundo valor!");
    scanf("%d", &b);
    printf("Digite o terceiro valor!");
    scanf("%d", &c);
    printf("Digite o quarto valor!");
    scanf("%d", &d);
    
    p1 = a * a;
    p2 = b * b;
    p3 = c * c;
    p4 = d * d;
    
    if(p3 >= 1000){
        printf("%d", p3);
    }
    else{
        printf("O quadrado de %d é %d\n", a, p1);
        printf("O quadrado de %d é %d\n", b, p2);
        printf("O quadrado de %d é %d\n", c, p3);
        printf("O quadrado de %d é %d\n", d, p4);
    }
}

