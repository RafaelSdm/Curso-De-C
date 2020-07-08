#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];
    int t[3][3];
    int i,j;


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("digite um numero da linha %d e coluna %d\n",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("[%d]",m[i][j]);
        }

        printf("\n");
    }

    printf("trasformando as colunas em linhas e linhas em colunas:\n\n");

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                t[i][j] = m[j][i];
            }
        }

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("[%d]",t[i][j]);
            }

            printf("\n");
        }
}
