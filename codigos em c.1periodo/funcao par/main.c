#include <stdio.h>
#include <stdlib.h>

int somatorio(int v[]){
    int i;
    int soma =0;

    for(i=0;i<30;i++){
        if(v[i]%2==0){
            soma = soma + v[i];
        }
    }

    return soma;


}

int main()
{
    int vetor[30];
    int i;
    int y =0;

    srand(time(NULL));

    for(i=0;i<30;i++){
        vetor[i] = rand()&11;
        printf("[%d]",vetor[i]);
    }

    printf("\n\na soma dos numeros pares do vetor e %d",somatorio(vetor));

}
