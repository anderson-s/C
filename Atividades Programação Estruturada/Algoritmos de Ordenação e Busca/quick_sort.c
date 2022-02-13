/******************************************************************************
quickSort
*******************************************************************************/
#include <stdio.h>
//Calcular pivô
int particiona(int *vetor, int inicio, int fim){
    int esquerda, direita, pivo, aux;
    esquerda = inicio;
    direita = fim;
    pivo = vetor[inicio];//O pivo é a posição do inicio do vetor

    while(esquerda < direita){
        while(vetor[esquerda] <= pivo){//Avança posição da esquerda
            esquerda++;
        }
        while(vetor[direita] > pivo){//Recua posição da direita
            direita--;
        }
        if(esquerda < direita){ //Troca os elementos da esquerda e direita
            aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;
        }
    }
    vetor[inicio] = vetor[direita];
    vetor[direita] = pivo;
    return direita;
}
//função quickSort
void quickSort(int *vetor, int inicio, int fim){
    int pivo;
    if(fim > inicio){
        pivo = particiona(vetor, inicio, fim);//Separa o vetor em partições
        quickSort(vetor, inicio, pivo-1);//Chama a função para a primeira metade
        quickSort(vetor, pivo+1, fim);//Chama a função para a segunda metade
    }
}
int main()
{
    int vetor[] = {2, 1, -10, 4, 3, 11, 99, 80, 66, 50};
    quickSort(vetor, 0, 9);
    printf("Vetor Ordenado!\n");
    for(int i = 0; i < 10; i++){
        printf("%d \n", vetor[i]);
    }
    return 0;
}
