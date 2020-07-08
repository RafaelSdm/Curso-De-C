#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	int m[5][5], i,j,k,l, aux;

    for(i=0;i<5;i++)
		for(j=0;j<5;j++)
            m[i][j]=0;

	srand(time(NULL));

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){

            aux=1;
            while(aux==1){
                aux=0;
                m[i][j] = 1+ rand() % 28;

                for(k=0;k<5&&aux==0;k++){
                    for(l=0;l<5&&aux==0;l++){
                        if(m[i][j]==m[k][l]&&(i!=k||j!=k)){
                            aux=1;
                        }
                    }
                }

            }

		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("[%d]", m[i][j]);
		}
		printf("\n");
	}

	return 0;
}

