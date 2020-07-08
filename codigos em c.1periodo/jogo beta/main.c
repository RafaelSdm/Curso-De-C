#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5];
    int i,j;
    int numeros[5];
    int y=0;
    int x=0;

    srand(time(NULL));

    printf("_______________________________\n");
    printf("\n      JOGO DA MEMORIA:");
    printf("\n_______________________________");

    printf("\nBEM VINDO AO JOGO DA MEMORIA!!!");
    printf("\n Agora prepare e tente guardar os numeros que virao a seguir:\n\n\n");

    for(i=0;i<5;i++){
        printf("[%d]",rand()%11);
        vetor[i] = rand()%11;
    }
    printf("\n\n\n\n\n Dados os numeros, agora e a sua vez de acertar! ;)");
    printf("\n\nDigite pelo menos 3 numeros vistos anteriormente:\n");

    for(j=0;j<5;j++){
        scanf("%d",&numeros[j]);
        for(i=0;i<5;i++){
            if(vetor[i]== numeros[j]){
                y = y+1;
            }
        }
    }

    if(y >2){
        printf("\n\nPARABENSS! Voce acertou!");
    }else{
        printf("\n\n GAME OVER :(");
    }



}
