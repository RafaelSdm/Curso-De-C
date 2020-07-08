#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i;
    int maior;


    printf("digite 10 numeros:\n");

    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);

        maior = vetor[0];
    }

    for(i=0;i<10;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }

    for(i=0;i<10;i++){
        printf("[%d]",vetor[i]*maior);
    }
}
