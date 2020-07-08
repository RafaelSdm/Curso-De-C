#include <stdio.h>
#include <stdlib.h>

char conceito(float nota){

    if((nota >=9) && (nota<=10)){
        return 'A';

    }else if((nota>=7)&&(nota <= 8.9)){
        return 'B';
    }else if((nota>=5)&&(nota <=6.9)){
        return 'C';
    }else{
        return 'D';
    }




}

int main()
{

    float media;


    printf("diga a media das notas:");
    scanf("%f",&media);


    printf("seu conceito: %c\n",conceito(media));

    if(conceito(media)=='A'){
        printf("SUA NOTA E EXCELENTE!");
    }else if(conceito(media)=='B'){
        printf("SUA NOTA ESTA BOA,MAS PODE MELHORAR!");
    }else if(conceito(media)=='C'){
        printf("PRECISA ESTUDAR MAIS!");
    }else{
        printf("SUA NOTA NAO ESTA PESSIMA!");
    }

    return 0;
}
