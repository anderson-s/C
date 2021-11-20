//2. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor) * altura)/2

#include <stdio.h>

void main(){
    float bmenor, bmaior, altura, area;

    printf("Informe o valor da base menor: ");
    scanf("%f", &bmenor);
    printf("Informe o valor da base maior: ");
    scanf("%f", &bmaior);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    area = ((bmaior + bmenor) * altura)/2;

    printf("A área do trapézio é: %.2f", area);

}