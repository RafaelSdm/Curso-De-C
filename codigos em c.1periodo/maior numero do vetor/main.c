#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20];
    int i,maiorn,numero;

    printf("digite o 1 numero:");
    scanf("%d",&numero);

    maiorn = numero;

    for(i=0;i<19;i++){
        printf("Digite o %d numero",i + 2);
        scanf("%d",&vetor[i]);

        if(vetor[i]>maiorn){
            maiorn = vetor[i];
        }
    }
    printf(" 0 maior numero %d",maiorn);


}
