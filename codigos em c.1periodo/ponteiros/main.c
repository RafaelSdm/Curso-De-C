#include <stdio.h>
#include <stdlib.h>

void maximoMinimo(int *v, int n,int *mai, int *men){

    printf("o maior numero do vetor é %d",*mai);
    printf("o menor numero do vetor é %d",*men);




}

int main()
{
    int vetor[]={0};
    int i =0;
    int j = 0;
    int resp;
    int k =0;
    int tam =0;



    while(j!=-1){
        printf("informe o numero do vetor:");
        scanf("%d",&vetor[i]);
        i++;

        printf("deseja informar mais algum numero: 0 para continuar e -1 para sair\n");
        scanf("%d",&resp);

        if(resp == 0){
            j =1;
        }else{
            j = -1;
        }
    }

    tam =i;

    printf("sequnencia dos vetores:\n");

    printf("o vetor possui %d posicoes",tam);

    for(i=0;i<tam;i++){
        printf("[%d]",vetor[i]);

    }

    for(i=0;i<tam;i++){
        if(i==0){
            maior = i;
            menor = i;
        }else{
            if(vetor[i]> maior{
                maior = vetor[i];
           }if else(vetor[i]< menor){
            menor = vetor[i];
        }
    }
}

maximoMinimo(vetor,&tam, &maior,&menor);
}
