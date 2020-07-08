#include <stdio.h>
#include <stdlib.h>

int minimax(int mat[5][5],int *ma,int *me,int *lin,int *col){
    int i;
    int j;
    int linha;
    int coluna;


    int maior = mat[0][0];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j]> maior){
                maior = mat[i][j];
                linha =i;
                coluna =j;
            }

            *lin = linha;
            *col = coluna;
        }

    }

    *ma = maior;
    int minim = mat[linha][0];
    for(i=0;i<5;i++){
        if(mat[linha][j]< minim){
            minim = mat[linha][j];

        }
    }

    *me = minim;




}

int main()
{
    int i;
    int j;
    int matriz[5][5];
    int mai =0;
    int min =0;
    int li =0;
    int co=0;

    srand(time(NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz[i][j]= rand()%101;
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }

    minimax(matriz,&mai,&min,&li,&co);

    printf("elemneto minimax: \n%d,\n%d\n\n",mai,min);
    printf("elemento minimax na linha %d e coluna %d",li,co);


}
