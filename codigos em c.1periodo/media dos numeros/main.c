#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int total =0;
    int cont = 0;
    float media;

    while(cont < 20)
    {

        printf("dige um numero:");
        scanf("%d",&n1);

        total =total + n1;
        cont = cont + 1;


    }
    media = (total / 20);
    printf("a media e de %f",media);

    return 0;
}
