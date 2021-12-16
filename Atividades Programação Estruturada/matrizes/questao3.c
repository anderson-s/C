/******************************************************************************

Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. 
Mova os valores desses vetores para uma matriz 2x10 e mostre os valores da matriz.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[2][10], x[10], y[10];
        printf("Digite os 10 valores do vetor x\n");
        for(int i = 0; i < 10; i++){
            printf ("\nx[%d] = ", i);
            scanf("%d", &x[i]);
        }
        
        printf("Digite os 10 valores do vetor y\n");
        for(int i = 0; i < 10; i++){
            printf ("\ny[%d] = ", i);
            scanf("%d", &y[i]);
        }
        
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 10; j++){
                if(i == 0){
                    matriz[i][j] = x[j];    
                }
                else{
                    matriz[i][j] = y[j];
                }
                
            }
        }
        
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 10; j++){
                printf ("\nMatriz[%d][%d] = %d\n", i, j, matriz[ i ][ j ]);
            }
        }
    }
  


