#include <stdio.h>
#include <stdlib.h>

int linha(int mat[4][4]){
    int i;
    int cont =0;
    int y =0;
    int vetor[4];
    int con =0;
    int x =0;

    while(cont < 4){
        for(i=0;i<4;i++){
            if(mat[cont][i]==0){
                x++;

                if(x==4){
                    y++;
                }

    }




}
    x =0;
    cont++;


}
 return y;

}

int coluna(int m[4][4]){
    int i;
    int cont =0;
    int y =0;
    int vetor[4];
    int con =0;
    int x =0;

    while(cont < 4){
        for(i=0;i<4;i++){
            if(m[i][cont]==0){
                x++;

                if(x==4){
                    y++;
                }

    }




}
    x =0;
    cont++;


}
 return y;





}

int main()
{
    int matriz[4][4];

    int i,j;
    srand(time(NULL));

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matriz[i][j]= rand()%2;
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nlinhas nulas %d",linha(matriz));
    printf("\ncolunas nulas %d",coluna(matriz));
}
