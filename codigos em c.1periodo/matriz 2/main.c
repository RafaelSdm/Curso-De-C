#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[10][10];
    int i,j;

    srand(time(NULL));

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            matriz[i][j] = rand()%101;
            printf("[%d]",matriz[i][j]);

        }
        printf("\n");
    }
    printf("_________________________\n");


    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==1){
                printf("[%d]",matriz[i+6][j]);
            }else if(i ==7){
                printf("[%d]",matriz[i-6][j]);
            }else{
                printf("[%d]",matriz[i][j]);
            }
        }
        printf("\n");
    }
}
