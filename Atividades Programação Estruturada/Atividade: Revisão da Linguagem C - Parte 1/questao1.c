//   1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.
#include <stdio.h>

void main(){
    float base, altura, area;
    printf("Informe o valor da base do terreno em metros: ");
    scanf("%f", &base);
    printf("Informe o valor da altura do terreno em metros: ");
    scanf("%f", &altura);
    
    area = base * altura;

    printf("A área do terreno é: %.2f m²", area);
}