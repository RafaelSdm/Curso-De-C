#include <stdio.h>
#include <stdlib.h>

int contador(int vet[],int n){
    int i;
    int y =0;
    for(i=0;i<30;i++){
        if(vet[i]==n){
            y = y+1;
        }
    }

    return y;



}

int main()
{
    int vetor[30];
    int i;
    int numero;
    int cont;

    srand(time(NULL));

    printf("Digite um numero inteiro e veja qunatas vezes ele aparece no vetor:\n");
    scanf("%d",&numero);

    printf("NUEMROS GERADOS ALEATORIAMENTE:\n\n");

    for(i=0;i<30;i++){
        vetor[i] = rand()%101;
        printf("[%d]",vetor[i]);
    }



    cont = contador(vetor,numero);

    printf("\n\n\neste numero que voce digitou apareceu %d vezes\n\n",cont);

    return 0;
}
