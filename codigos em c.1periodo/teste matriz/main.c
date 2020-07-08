#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[10][10];
    int i,j;
    int matrize[1][10];
    int matre [1][10];

    srand(time(NULL));


    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            matriz[i][j] = rand()%101;
            printf("[%d]",matriz[i][j]);

            if(j==7){
                matrize[i][j] = matriz[i][j];
            }
            if(j==8){
                matre[i][j] = matriz[i][j];
            }
        }
        printf("\n");
    }

    printf("------------------\n");

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

                if((i!=2) && (i!=8)){
                    printf("[%d]",matriz[i][j]);
                }
                if(i==2){
                    printf("[%d]",matre[i+5][j]);
                }

                if(i==8){
                    printf("[%d]",matrize[i -5][j]);
                }

        }
        printf("\n");
    }
}
