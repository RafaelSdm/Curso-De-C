#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[30][11];
    int i,j;
    int soma[11] ={0};

    for(i=0;i<30;i++){
        for(j=0;j<11;j++){
            matriz[i][j] = rand()%10;
            if(j<10){
                printf("[%d]",matriz[i][j]);
                soma[i] =soma[i]+ matriz[i][j];
            }else{
                printf("[%d]",soma[i]);
            }
        }
        printf("\n");
    }
}
