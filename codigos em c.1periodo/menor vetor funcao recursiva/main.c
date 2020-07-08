#include <stdio.h>
#include <stdlib.h>

int menor(int vet[],int n){
    int v=0;

    if(vet[n]==0){
        v = vet[n];
        return vet;
    }else if(vet[n]< v){
        return menor(vet, n-1);
    }


}

int main()
{
    int vetor[20];
    int i;

    srand(time(NULL));

    printf("gerando numeros aleatorios do vetor\n");

    for(i=0;i<20;i++){
        vetor[i]= rand()%101;
        printf("[%d]",vetor[i]);
    }

    printf("o menor elemnto do vetor e:%d",menor(vetor,19));
}
