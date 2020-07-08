#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i;
    int nMaior=0;

    for(i=0;i<5;i++){
        printf("informe o %d numero", i++);
        scanf("%d \n",&vetor);
        nMaior = vetor [0];

    if(nMaior < vetor[i])
    {
        nMaior = vetor[i];

    }

        printf(" o maior valor e de:%d",nMaior);

        }
}
