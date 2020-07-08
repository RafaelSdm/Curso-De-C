#include <stdio.h>
#include <stdlib.h>

int sequencia(int vet[],int v[]){

    int i;
    int resultado =0;
    int cont =0;

    while(cont < 10){
        for(i=0;i<10;i++){
            if(v[cont]==vet[i]){


            resultado++;
            }else{

        }



    }
    cont++;




}

return resultado;

}

int main()
{
    int vetor[10];
    int vetor1[10];

    int i;

    srand(time(NULL));

    printf("\nprimeiro vetor:\n");

    for(i=0;i<10;i++){

       scanf("%d",&vetor[i]);

    }

    printf("\nsegundo vetor:\n");
    for(i=0;i<10;i++){

        scanf("%d",&vetor1[i]);

    }

    printf("\nsequncia do primeiro vetor:\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetor[i]);
    }

    printf("\nsequencia do segundo vetor:\n");

    for(i=0;i<10;i++){
        printf("[%d]",vetor1[i]);
    }

    if(sequencia(vetor,vetor1)==10){
        printf("\na sequencia  corresponde");
    }else{
        printf("\nos numeros nao estao permutados");
    }

}
