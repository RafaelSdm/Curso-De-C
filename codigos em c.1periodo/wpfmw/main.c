#include <stdio.h>
#include <stdlib.h>

int sequencia(int vet[],int v[]){

    int i;
    int resultado;
    int cont =0;

    while(cont < 10){
        for(i=0;i<10;i++){
            if(v[cont]!=vet[i]){
            return 0;
            break;
            }else{
                cont ++;
        }



    }
    return 1;



}

}

int main()
{
    int vetor[10];
    int vetor1[10];

    int i;

    srand(time(NULL));

    printf("\nprimeiro vetor:\n");

    for(i=0;i<10;i++){
        vetor[i]= rand()%1;
        printf("[%d]",vetor[i]);
    }

    printf("\nsegundo vetor:\n");
    for(i=0;i<10;i++){
        vetor1[i]= rand()%1;
        printf("[%d]",vetor1[i]);
    }

    if(sequencia(vetor,vetor1)==0){
        printf("\na sequencia nao corresponde");
    }else{
        printf("\nos numeros estao permutados");
    }

}
