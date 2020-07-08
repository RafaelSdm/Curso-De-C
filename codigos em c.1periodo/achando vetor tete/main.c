#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[4];
    int i,numero;
    int sim =0;
    int nao=0;

    for(i=0;i<4;i++){
        printf("digite um numero:");
        scanf("%d",&vetor[i]);
    }
    printf("\n\n\ndigite um numero:");
    scanf("%d",&numero);
    for(i=0;i<4;i++){
        if(vetor[i]==numero){
            sim=numero;
        }else{
            nao = numero;
        }
    }

    printf("dado o vetor:\n\n");
    for(i=0;i<4;i++){
        printf("%d\n\n",vetor[i]);
    }
    if(sim == numero){
        printf("\n o numero %d pertence ao vetor :)",numero);
    }else{
        printf("\n o numero  %d nao pertence ao vetor :(",numero);
    }


}
