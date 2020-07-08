#include <stdio.h>
#include <stdlib.h>

void listagem (int vet[30],int impar[30],int par[30],int *cont1, int *cont2){
    int i;
    int j=0;
    int p=0;

    for(i=0;i<30;i++){
        if(vet[i]%2==0){
            par[i] = vet[i];
            p++;
        }else{
            impar[i]= vet[i];
            j++;
        }

        *cont1 = p;
        *cont2 = j;

    }

    return;



}

int main()
{
    int vetor[30];
    int i;
    int par[30]={0};
    int imp[30]={0};
    int p=0;
    int a=0;

    srand(time(NULL));
    printf("numeros gerados aleatoriamente:\n");
    for(i=0;i<30;i++){
        vetor[i]= rand()%101;
        printf("[%d]",vetor[i]);
    }

    listagem(vetor,imp,par,&a,&p);

    printf("\n\n\npara numeros pares temos:\n\n\n");

    for(i=0;i<30;i++){
        printf("[%d]",par[i]);
    }

    printf("\n\n\npara numeros impares temos:\n\n\n");

    for(i=0;i<30;i++){
        printf("[%d]",imp[i]);
    }

    printf("\n\n");

    system("pause");
    return 0;
}
