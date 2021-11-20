//A padaria Hotpão vende certa quantidade de pães franceses e uma quantidade de broas a cada dia. 
//Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. 
//Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). 
//Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.

#include <stdio.h>

void main(){
    float qpaes, qbroas, total, poupanca;

    printf("Informe a quantidade total de pães vendidos: ");
    scanf("%f", &qpaes);

    printf("Informe a quantidade total de broas vendidas: ");
    scanf("%f", &qbroas);

    total = (qpaes * 0.12) + (qbroas * 1.5);

    poupanca = (total * 0.1);

    printf("O valor total arrecadado pela venda dos pães e das broas foi: R$ %.2f \n", total);

    printf("O valor que você deve guardar na poupança é: R$ %.2f", poupanca);

}