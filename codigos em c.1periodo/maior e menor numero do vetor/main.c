#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i,maior,menor;

    printf("digite 10 numeros:\n");
    for(i=0;i<9;i++){
        scanf("%d\n",&vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];

    for(i=0;i<9;i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }else if(vetor[i]< menor){
            menor = vetor[i];
        }
    }
    printf("\no maior numero do vetor e : %d",maior);
    printf("\no menor numero do vetor e : %d",menor);

}
