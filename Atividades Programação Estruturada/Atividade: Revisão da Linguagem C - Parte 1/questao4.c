//O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. 
//Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
//Assuma que a balança já desconte o peso do prato.

#include <stdio.h>

void main(){
    float refeicao, valor;

    printf("Informe o peso da sua refeição: ");
    scanf("%f", &refeicao);

    valor = refeicao * 12;

    printf("O valor a ser pago é  R$ %.2f", valor);

}