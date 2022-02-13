/******************************************************************************
MergeSort
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int inicio, int meio, int fim){
    int *aux, p1, p2, tamanho, i, j, k;   
    int fim1 = 0, fim2 = 0;
    tamanho = fim-inicio+1;//tamanho do vetor
    p1 = inicio;//parte 1 do vetor
    p2 = meio+1;//parte 2 do vetor
    
    aux = malloc(tamanho*sizeof(int));//vetor auxiliar, utilizando memória alocada

    if(aux != NULL){
        for(i = 0; i < tamanho; i++){
            if(!fim1 && !fim2){
               if(vetor[p1] < vetor[p2]){//Qual o menor elemento?
                aux[i] = vetor[p1++]; //Combinar ordenando
               } else{//Qual o menor elemento?                  
                 aux[i] = vetor[p2++]; //Combinar ordenando   
               }
            if(p1> meio) fim1=1; //verificando se o vetor acabou
            if(p2> fim) fim2=1; //verificando se o vetor acabou
            }
            else{//Copia o que sobrar, caso o vetor acabe
                if(!fim1){
                    aux[i] = vetor[p1++];
                }else{
                    aux[i] = vetor[p2++];
                }
            }
            
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++){//Vai fazer a copia do auxiliar para o original de forma ordenada
            vetor[k] = aux[j];
        }
    }free(aux);
    
    // for(int t = 0; t < tamanho; t++){
    //     printf("%d \n", vetor[t]);
    // }
}
int mergeSort(int vetor[], int inicio, int fim){
    int meio; //meio do vetor
    if(inicio < fim){
        meio = (inicio+fim)/2;//calcular o meio do vetor
        mergeSort(vetor, inicio, meio);//primeira metade do vetor
        mergeSort(vetor, meio+1, fim);//segunda metade do vetor
        merge(vetor, inicio, meio, fim);//realizando a combinação das duas metades de forma ordenada
    }
    return 0;
}
int main()
{
    int vetor[] = {2, 1, -10, 4, 3, 11, 99, 80, 66, 50};
    mergeSort(vetor, 0, 9);
    printf("Vetor ordenado!\n");
    for(int i = 0; i < 10; i++){
        printf("%d \n", vetor[i]);
    }
    return 0;
}
