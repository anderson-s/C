#include <stdio.h>
#include <string.h>

int
main ()
{
    // Variáveis
  char nome[100], senha[100];
//   Entradas
    printf("Escreva seu nome: ");
    gets(nome);
    printf("Escreva sua senha");
    gets(senha);
    
    while(!str(nome, senha)){
    printf("Sua senha não pode ser igual ao seu nome!/n Digite novamente: ");
    gets(nome);
    printf("Escreva sua senha");
    gets(senha);
    }
  
  
}
