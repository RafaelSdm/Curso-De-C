#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int vetor[30];
    int i;

    srand(time(NULL));

    for(i=0;i<30;i++){
        vetor[i]= rand()%101;
    if(vetor[i]%3 ==0){
        printf(" o %d° numero é:[%d]\n", i+1,vetor[i]);
    }else{
        i--;
        }
    }
}
