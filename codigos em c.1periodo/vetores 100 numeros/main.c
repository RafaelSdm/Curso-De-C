#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100];
    int i;

    for(i =0;i<100;i++){
        vetor[i] = i +1;
        printf("%d \n",vetor[i]);
    }

    return 0;
}
