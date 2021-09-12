
#include <stdio.h>

int main()
{
    // Entradas
    int c; 
    float salario, horas, excesso, valor = 10.00;

    printf("Digite o código");
    scanf("%d", &c);
    
    printf("Digite as horas que o operário trabalhou!");
    scanf("%f", &horas);
    
    if(horas > 50){
        excesso = (horas - 50)*20;
        salario = excesso + (valor * 50);
        printf("O salario total do operário é: %.2f\n", salario);
        printf("O excedente é: %.2f", excesso);
    }
    else{
        excesso = 0;
        salario = excesso + (valor * 50);
        printf("O salario do operário é: %.2f\n", salario);
        
    }
}
