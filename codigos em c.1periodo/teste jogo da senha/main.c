#include <stdio.h>
#include <stdlib.h>

int existe(int val[],int tam,int valor){
    int i;
    for(i=0;i<tam;i++){
        if(val[i]== valor){
            return 0;
        }else{
            return 1;
        }
    }




}

void gerarAleatotios(int num[],int qts){
    int i;
    int v;
    srand(time(NULL));

    for(i=0;i<qts;i++){
        v = rand()%11;

        while(existe(num,i,v)== 0){
            v = rand()%11;
        }
        num[i] = v;

    }



}


int main(){

    int vetor[4];
    int i;

    printf("_____________________________\n");
    printf("bem vindo ao jogp da senha!\n");
    printf("_____________________________\n");


    // gerando numeros aleatorios para o computador

    printf("numeros aleatorios");

    //gerarAleatorios(vetor[],4);
    for(i=0;i<4;i++){
        printf("[%d]",gerarAleatorios]);

    }

    return 0;
}



