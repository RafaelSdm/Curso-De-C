#include <stdio.h>
#include <stdlib.h>


int fatorial(int vet){
    int i;
    int fat = 1;


    for(i=1;i<=vet;i++){
        fat = fat *i;
    }

    return fat;



}

int main()
{
    int vetor[10];
    int i;
    int vetorB[10];

    srand(time(NULL));


    printf("gerando os numeros dos vetores:\n");

    for(i=0;i<10;i++){
        vetor[i] = rand()%8+1;
        printf("[%d]",vetor[i]);
    }

    for(i=0;i<10;i++){
       // vetor[i] = rand()%8+1;
        vetorB[i] = fatorial(vetor[i]);
    }

    printf("\n\ngerando o segundo vetor:\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetorB[i]);
    }

}
