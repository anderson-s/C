#include <stdio.h> // Incluindo bibliotecas para a linguagem C
#include <locale.h> //Incluindo biblioteca para caracteres especiais
//std = Standard(Padrão)
//io = Input/Output(Entrada/Saída)

int main(){
//Declaração de variáveis
	int n;
	printf("Informe o valor: ");
	scanf("%d", &n);
// Processamento
	if(n > 100){
	  printf("Você digitou: %d", n);
	}
	else{
	    n = 0;
	    printf("%d", n);   
	}
	
}


