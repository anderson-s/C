/******************************************************************************

Faça um programa que preencha uma matriz 4x2 com valores inteiros, calcule e mostre dois vetores resultantes. 
O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos. 
Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][2], positivo[8], negativo[8], p = 0, n = 0, z = 0;
    
      printf("Digite os valores da matriz\n");
      for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite um valor para a linha %d coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if(matriz[i][j] < 0){
                negativo[n] = matriz[i][j];
                n = n + 1;
            }
            else if(matriz[i][j] > 0){
                positivo[p] = matriz[i][j];
                p = p + 1;
            }
            else{
                z = 1 + z;
            }
        }
      }
      
      if(p > 0){
        printf("Foram digitados %d números positivos\n", p);
        printf("Os positivos são: ");
        for(int i = 0; i < p; i++){
            printf("%d, ", positivo[i]);
        }
         
      }
      else{
          printf("Não possuem números positivos\n");
      }
      
      if(n > 0){
        printf("\nForam digitados %d números negativos\n", n);
        printf("Os negativos são: ");
        for(int i = 0; i < n; i++){
            printf("%d, ", negativo[i]);
        } 
        
      }
      else{
          printf("\nNão possuem números negativos");
      }
      
      if(z > 0){
         printf("Foram digitados %d zeros", z);
      }
      
        
    }
  



