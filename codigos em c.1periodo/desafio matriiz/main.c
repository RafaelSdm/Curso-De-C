#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int i,j;
    int numero;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            numero = (i*j);

            if(i<j){
                printf("[0]");
            }else{
                printf("[%d]",numero);
            }
        }
        printf("\n");
    }
}
