#include <stdio.h>
#include <stdlib.h>

void multiplicando(int vet[],int n){
    int i;
    for(i=0;i<10;i++){
        vet[i] = vet[i]*n;
    }



}

int main()
{
    int vetor[10];
    int i;
    int numero;

    srand(time(NULL));
    printf("segue abaixo os vetores fornecidos aleatoriamente:\n");
    for(i=0;i<10;i++){
        vetor[i]=rand()%11;
        printf("[%d]",vetor[i]);
    }

    printf("\n\ndigite um numero pelo qual ira ser multiplicado por cada numero da matriz:\n");
    scanf("%d",&numero);


    multiplicando(vetor,numero);

    printf("\nsegue abaixo os numeros multiplicados:\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetor[i]);
    }
}
