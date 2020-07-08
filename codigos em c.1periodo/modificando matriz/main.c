#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];
    int i,j;
    int vetor[5][5];
    int vetor1[5][5];

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j] = rand()%100;
            printf("[%d]",matriz[i][j]);

            if(i==2){
                vetor[i][j] = matriz[i][j];
            }

            if(i ==4){
                vetor1[i][j] = matriz[i][j];
            }

        }
        printf("\n");
    }
    printf("---------------------\n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

            if((i !=2)&&(i!=4)){
                printf("[%d]",matriz[i][j]);
            }else if(i ==2){
                printf("[%d]",vetor1[i][j]);
            }else if(i==4){
                printf("[%d]",vetor[i][j]);
            }
        }
        printf("\n");
    }
}
