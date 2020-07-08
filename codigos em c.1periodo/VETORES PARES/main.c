#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i,n1;
    int y=0;
    int x=0;

    printf("digite 10 numeros:\n");
    for(i=0;i<10;i++){
        scanf("%d\n",&vetor[i]);

        if(vetor[i]%2==0){
            y=y+1;
        }else{
        }

    }
    printf("O vetor tem %d pares",y);
    printf("\n o vetor tem %d impares",10-y);
}
