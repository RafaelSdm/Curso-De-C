#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont =0;
    int n1;
    int soma =0;
    float media =0;
    int y =0;

    while(n1>=0)
    {
        printf("digite um numero");
        scanf("%d",&n1);
        if(n1>=0)
        {
            y=y+1;
            soma = soma + n1;
            media = soma/y;
        }
        cont = cont +1;


    }
    printf("a media dos numeros e de : %f ",media);
    printf(" foraamm lidos %d valores",y);
}
