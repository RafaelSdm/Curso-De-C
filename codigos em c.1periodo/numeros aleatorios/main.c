#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i;
    srand(time(NULL));
    int valor =0;
    int j;
    int tam;

    printf("numeros aleatorios sem se repetir:");


    for(i=0;i<10;i++){
        vetor[i] = rand()%10+1;

        if(i>=2){
            valor = vetor[i];
            tam =i;
            for(j=0;j<tam;j++){
                if(valor == vetor[j]){
                    i--;
                }


            }
            valor =0;
            tam =0;
        }
    }

    for(i=0;i<10;i++){
        printf("[%d]",vetor[i]);
    }
    printf("numeros gerados pelo ususario:");

    for(i=0;i<4;i++){
        printf("[%d]",vet[i]);
    }
}
