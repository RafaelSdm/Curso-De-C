#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetor[10];
    int i;

    printf("digite 10 numeros:\n");
    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }

    printf("ordem inversa do vetor:\n");

    for(i=9;i>=0;i--){
        printf("%d\n",vetor[i]);
    }
}
