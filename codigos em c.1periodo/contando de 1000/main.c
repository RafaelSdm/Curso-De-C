#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont,div;
    int numero = 100000;
    int n1=0;

    div = numero/100;

    for(cont =0;cont < numero;cont = cont + div)
    {
        n1 = n1+ div;
        printf("\n%d", n1);
    }
}
