/******************************************************************************
Busca Binária
*******************************************************************************/
#include <stdio.h>

//função da busca
int busca_binaria(int tamanho, int* v, int elemento){
    int inicio = 0;//inicio do vetor
    int fim = tamanho - 1;//fim do vetor
    int meio = 0;//meio do vetor
    
    while(inicio <= fim){//verificar a lista
        meio = (inicio + fim)/2;
        if(v[meio] == elemento){//valor encontrado
            return meio;//retorna o valor
        }
        else if(elemento < v[meio]){//Se o elemento for menor, vai ser procurado na primeira metade(esquerda)
            fim = meio - 1;
        }
        else if(elemento > v[meio]){//Se o elemento for maior, vai ser procurado na segunda metade(direita)
            inicio = meio + 1;
        }
    }return -1;  
    //caso o elemento não seja encontrado
    };

int main()
{
    int vetor[] = {10, 20, 30, 31, 33, 66, 80, 100};//lista ordenada
    int tamanho = sizeof(vetor)/sizeof(int);//tamanho do vetor
    int valor = busca_binaria(tamanho, vetor, 100);
    printf("%d \n", valor);
    //retorna a posição do elemento encontrado na lista, caso contrário retorna -1
    return 0;
}
