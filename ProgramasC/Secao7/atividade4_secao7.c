#include <stdio.h>
#include <ctype.h> 
//Vai servir para que letras maiusculas e minusculas não se diferenciem

int main()
{
    // Variáveis
    char sexo;
    float altura, peso;
    // Entradas
    
    printf("Qual sua altura?");
    scanf("%f", &altura);
    gets(stdin);
    printf("Qual seu sexo: M/F?");
    scanf("%c", &sexo);
    
    // processamento
    if(tolower(sexo) == 'm'){
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f", peso);
    }
    if(tolower(sexo) == 'f'){
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso);
    }
    if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
        printf("Opção inefinida! Programa encerrado");
    }
}
