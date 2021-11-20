// Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.

#include <stdio.h>

void main(){
    int qcavalos, qferraduras;

    printf("Informe a quantidade de cavalos que o haras possui: ");
    scanf("%d", &qcavalos);

    qferraduras = qcavalos * 4;

    printf("São necessárias %d ferraduras, para equipar todos os cavalos", qferraduras);

}