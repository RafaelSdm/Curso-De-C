#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int i,numero;
    int contido=0;

    for(i=0;i<20;i++){
        printf("digite o %d numero:",i+1);
        scanf("%d",&vetor[i]);

    }

    printf("digite outro numero:");
    scanf("%d",&numero);
    for(i=0;i<20;i++){
        if(numero == vetor[i]){
            contido =1;
    }
    }
    if(contido){
        printf("\n o numero %d esta no vetor",numero);
    }else
    {
        printf("\n o  numero %d nao esta no vetor",numero);
    }
    }


