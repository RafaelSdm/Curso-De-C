#include <stdio.h>
#include <stdlib.h>

void inverter(int vet[]){

    int i;
    int j=19;
    int aux =0;

    for(i=0;i<10;i++){
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
        aux =0;
        j--;
    }



}

int main()
{
    int vetor[20];
    int i;

    srand(time(NULL));

    printf("VETOR ORIGINAL: \n");

    for(i=0;i<20;i++){
        vetor[i]= rand()%51;
        printf("[%d]",vetor[i]);

    }

    printf("\n\nVETOR INVERTIDO: \n");

    inverter(vetor);

    for(i=0;i<20;i++){
        printf("[%d]",vetor[i]);
    }
}
