#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_inicial;
    int cont;
    cont =0;

    printf("qual e o primeiro numera d sequencia?");
    scanf("%d",&numero_inicial);

    while( cont < 10)
    {
        printf("\n %d",cont);
        cont = cont +1;
    }
    if(cont >  numero_inicial)
    {
        printf("%d e menor",numero_inicial);
    }else
    {
        printf("%d e maior",numero_inicial);
    }
    return 0;
}
