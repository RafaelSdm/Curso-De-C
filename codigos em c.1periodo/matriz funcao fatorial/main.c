#include <stdio.h>
#include <stdlib.h>

void fatorial(int matriz[5][5],int fat[5][5]){

    int i;
    int j;
    int cont;
    int fato =1;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cont = matriz[i][j];

            while(cont>1){
                fato = fato * cont;
                cont--;

            }
            fat[i][j] = fato;
            fato =1;
        }
    }



}

int main()
{
    int matriz[5][5];
    int i;
    int j;
    int fat =1;
    int cont;
    int fatorado[5][5];

    srand(time(NULL));

    printf("\nMatriz gerada aleatoriamente:\n\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]=rand()%10;
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }


    fatorial(matriz,fatorado);
    printf("\n\n\nmatriz fatorada:\n\n\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("[%d]",fatorado[i][j]);
        }
        printf("\n");
    }
}
