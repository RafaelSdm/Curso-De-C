#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    int i,j;
    int maior;
    int linha,coluna;

    printf("informe os numeros da matriz");

    for(i=0;i<3;i++){
        printf("digite os valores da linha %d\n",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);

            maior = matriz[0][0];
            if(matriz[i][j]<maior){
                linha = i+1;
                coluna =j+1;
            }else if(matriz[i][j]> maior){
                linha = i+1;
                coluna = j+1;
        }
    }
 }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");

    }

    printf("o maior numero esta na linha %d e coluna %d",linha,coluna);
}
