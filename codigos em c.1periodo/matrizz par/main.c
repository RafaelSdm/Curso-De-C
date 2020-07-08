#include <stdio.h>
#include <stdlib.h>

int par(int mat[6][6]){
    int cont =0;
    int i;
    int con =0;
    int k =0;
    int soma =0;
    int s =0;



    while(cont < 6){
        for(i=0;i<6;i++){
            if(mat[cont][i] %2 ==0){
                k++;
                soma = soma + mat[cont][i];
            }
            if(k ==4){
                cont ++;
                s = s + soma;
            }
            k =0;
            soma =0;
        }
    }


    return s;

}

int main()
{
    int mat[6][6];
    int i;
    int j;

    srand(time(NULL));

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            mat[i][j] = rand()%11 +1;
        }
    }

    printf("matriz:\n\n");

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\na a soma e de: %d",par(mat);

    return 0;

}
