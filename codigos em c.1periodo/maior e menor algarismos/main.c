#include<stdio.h>

#include<stdlib.h>

#include<locale.h>

main(){

setlocale(LC_ALL, "Portuguese");

int num, maior,menor;

do{

    �printf("\n Digite um n�mero: ");

�    scanf("%d",&num);

�   if((num>=maior)&&(num>=menor)){

�   maior=num;

}

    else{

    �if((num<maior)&&(num<menor)){

�    menor=num;

�}

}

}while(num<=20);

printf("\n O n�mero maior �: %d",maior);

printf("\n O n�mero menor �:%d",menor);

}



Leia mais em Brainly.com.br - https://brainly.com.br/tarefa/418855#readmore
