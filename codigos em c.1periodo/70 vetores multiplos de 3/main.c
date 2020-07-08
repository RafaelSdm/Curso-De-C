#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[70];
    int i;

    for(i=0;i<30;i++){
        vetor[i] = i+1;

        if(i%3==0){
            vetor[i]= 10;
        }else{
            vetor[i]= vetor[i]*10;
        }
        printf("%d \n \n",vetor[i]);
    }
}
