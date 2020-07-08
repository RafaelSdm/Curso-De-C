#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i,j;
    int y=0;
    int resp[3];
    int x =0;

    srand(time(NULL));

    printf("\n_________________________");
    printf("\n\njogo da memoria");
    printf("\n_________________________");

    printf("\n\n\n\n decore os numeros a seguir:\n\n\n");

    for(i=0;i<5;i++){
        printf("|%d|",rand()%11);
        vetor[i] = rand()%11;
    }

    printf("\n\n\n\n\nagora e a sua vez de jogar:\n\n\n\n");
    printf("\n\n\n\n\n tente acertar no minimo 3 numeros do sequencia:\n\n\n\n");

    printf("\ndigite a sequencia caso tenha decorado:\n");
    for(j=0;j<3;j++){
        scanf("%d",&resp[j]);
        for(i=0;i<5;i++){
            if(resp[j]== vetor[i]){
               y = y+1;
            }else{
               x = x+1;
          }

        }

    }

        if(y>=3){
            printf("parabens voce ganhou:");

        }else{
            printf("voce perdeu");
        }

}

