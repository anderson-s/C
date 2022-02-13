/******************************************************************************
Insertion Sort
*******************************************************************************/
#include <stdio.h>


int main()
{
    int vetor[] = {2, 1, -10, 4, 3, 11, 99, 80, 66, 50};
    int tamanho = sizeof(vetor)/sizeof(int);//tamanho do vetor
    int i, j, aux;
    
    //Insertion
    for(i = 1; i < tamanho; i++){
        aux = vetor[i];
        j = i - 1;
        while((j >= 0) && (aux < vetor[j])){//Processo de alocação
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
       
    }
    //Imprimindo vetor ordenado
    for(int v = 0; v < 10; v++){
        printf("%d \n", vetor[v]);    
    }
    
    return 0;
}
