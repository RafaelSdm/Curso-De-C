#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int maisculaminuscula(char nome[], int i,int tam){
        int cont =0;
        int con =0;
        for(i=0;i<tam;i++){
            if((nome[i]=='a')||(nome[i]=='b')||(nome[i]=='c')||(nome[i]=='d')||(nome[i]=='e')||(nome[i]=='f')||(nome[i]=='g')||(nome[i]=='h')||(nome[i]=='i')||(nome[i]=='j')||(nome[i]=='k')||(nome[i]=='l')||(nome[i]=='m')||(nome[i]=='n')||(nome[i]=='o')||(nome[i]=='p')||(nome[i]=='q')||(nome[i]=='r')||(nome[i]=='s')||(nome[i]=='t')||(nome[i]=='u')||(nome[i]=='v')||(nome[i]=='x')||(nome[i]=='z')&&(i==0)){
                cont++;
            //}if else(nome[i]==' '){

            }else{
                con++;
            }
        }



        if(i==0){
            return cont;
        }else{
            return con;
        }

}

int main()
{
    char nome[25];

    int tam;

    int i;

    printf("informe uma palavra ou uma letra:");
    fgets(nome,25,stdin);
    tam = strlen(nome);

    printf("informe 0 ou 1:");
    scanf("%d",&i);

    //maisculaminuscula(nome,i);

    if(i==1){
        printf("a palavra possui %d letras maiusculas",maisculaminuscula(nome,i,tam));
    }else{
        printf("a palavra possui %d letras minusculas",maisculaminuscula(nome,i,tam));
    }



}
