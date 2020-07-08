#include <stdio.h>
#include <stdlib.h>
int primo(int mat[5][5]){

    int i,j,k,divisores =0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            for(k =1;k<mat[i][j];k++){
                if(mat[i][j]%k==0){
                    divisores++;
            }
        }
    }

    return divisores;


    }

}
int main()
{
    int matriz[5][5];
    int i,j;

    srand(time(NULL));

    printf("MATRIZ INFORMADA:\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]= rand()%10 +1;
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }

    printf("nessa matriz possui %d numeros primos",primo(matriz));



}


