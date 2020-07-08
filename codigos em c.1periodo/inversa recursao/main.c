#include <stdio.h>
#include <stdlib.h>

void inverter(vet[],int a,int b){
    printf("[%d]",vet[a]);

    if(vet[a]==0){
        printf("[%d]",vet[0]);
    }else{
        printf("[%d]",inverter(vet[a-1]))}


}

int main()
{
    int vetor[10];
    int i;

    srand(time(NULL));

    printf("gerando numeros aleatorios para o vetor:");

    for(i=0;i<10;i++){
        vetor[i]= rand()%101;
        printf("[%d]",vetor[i]);
    }


}
