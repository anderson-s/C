#include <stdio.h> // Incluindo bibliotecas para a linguagem C
#include <locale.h> //Incluindo biblioteca para caracteres especiais
//std = Standard(Padrão)
//io = Input/Output(Entrada/Saída)

int main(){
//Declaração de variáveis
	float valor, horas, salario;
	printf("Informe o valor da hora: ");
	scanf("%f", &valor);
	printf("Quantas horas você trabalhou nesse mês: ");
	scanf("%f", &horas);

	//Processamento
	salario = (horas * valor);
    
	//Saída
	printf("O seu salário será de: ");
	printf("%.2f", salario);
	printf(" reais");

}




