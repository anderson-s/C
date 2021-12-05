//Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. 
//O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos. 
//Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.



#include <stdio.h>

int main()
{
    int vetor[8], positivo[8], negativo[8], p = 0, n = 0;
   
     for(int i = 0; i < 8; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
        
        if(vetor[i] >= 0){
            positivo[p] = vetor[i];
            p = p + 1;
        }else{
            
            negativo[n] = vetor[i];
            n = n + 1;
        }
    }
    if(p == 0){
        printf("Não existe nenhum valor no vetor positivo");
    }
    else{
      
    printf("Os valores do vetor positivo são: ");
    for(int i = 0; i < p; i++){
        printf("%d", positivo[i]);
    }  
    }
    printf("\n");
    if(n == 0){
        printf("Não existe nenhum valor no vetor negativo");
    }
    else{
        printf("\n Os valores do vetor negativo são: ");
    for(int j = 0; j < n; j++){
        printf("%d", negativo[j]);
    }
    }

    return 0;
}
