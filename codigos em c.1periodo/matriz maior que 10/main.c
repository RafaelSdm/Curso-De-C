#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int i,j;
    int y=0;

    printf("informe os valores para a matriz a seguir:");

    for(i=0;i<4;i++){
        printf("digite os valores da linha %d \n",i+1);
        for(j=0;j<4;j++){
            scanf("\n%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                y++;
            }
        }
    }
    printf("a matriz possui %d numeros maiores que 10",y);
}
