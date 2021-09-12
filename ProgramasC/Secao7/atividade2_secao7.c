#include <stdio.h> // Incluindo bibliotecas para a linguagem C
#include <locale.h> //Incluindo biblioteca para caracteres especiais
//std = Standard(Padrão)
//io = Input/Output(Entrada/Saída)

int main(){
	int n, a, b;
	printf("Informe o valor: ");
	scanf("%d", &n);
// Processamento
	if(n > 0){
	  a = n;
	  printf("O número digitado é positivo: %d", a);
	  
	}
	else if (n < 0){
	    b = n;
	  printf("O número digitado é negativo: %d", b);
	}
	else if(n == 0){
	    printf("O número digitado é nulo: %d", n);
	}
	
}


