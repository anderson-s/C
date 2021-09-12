#include <stdio.h> // Incluindo bibliotecas para a linguagem C
#include <locale.h> //Incluindo biblioteca para caracteres especiais
//std = Standard(Padrão)
//io = Input/Output(Entrada/Saída)

int main(){
//Declaração de variáveis
	float metros, cm;
	printf("Informe o metro: ");
	scanf("%f", &metros);

	//Processamento
	cm = (metros * 100);

	//Saída
	printf("A conersão em cm é: %3.f", cm);

}

