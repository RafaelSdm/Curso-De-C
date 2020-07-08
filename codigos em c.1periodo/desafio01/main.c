#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[25];


    int i;
    int j = 2;


    for(i=1;i<=25;i++){
        if(i ==1){
            vetor[i]= 1;

        }else if(i==2){
            vetor[i]= 6;
        }else if (i==3){
            vetor[i] = 16;
        }else{
            vetor[i] = vetor[i-1]+(10 *j);

        }
        j = j+1;


    }

    for(i=1;i<=25;i++){
        printf("%d \n",vetor[i]);
    }
}


