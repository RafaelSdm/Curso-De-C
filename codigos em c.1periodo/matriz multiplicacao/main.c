#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[6][6];
    int i,j;
    int mult;

    printf("digite um numero a qual voce quer que seja multiplicado:\n");
    scanf("%d",&mult);

    for(i=0;i<6;i++){
        printf("digite os valores da linha %d\n",i+1);
        for(j=0;j<6;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("a matriz corresponde multiplica por %d e:\n",mult);

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("[%d]",matriz[i][j]*mult);
        }
        printf("\n");
    }
}
