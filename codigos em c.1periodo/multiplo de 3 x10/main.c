#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[70];
    int numero,i;
    int nvetor[70];


    for(i=0;i<70;i++){
        vetor[i]= i +1;
        printf("\n\n %d",vetor[i]);

    }
    for(i=0;i<70;i++){
    if(i %3 ==0){
        i = 10;
        vetor[i] ==i;
    }else
    {
        i = 1 *10;
        vetor[i]==i;
    }
    }

    for(i=0;i<70;i++){
        printf("\n \n %d",vetor[i]);
    }

    }
