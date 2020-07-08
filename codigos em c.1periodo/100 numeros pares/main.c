#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cont = 0;

     printf("digite o primeiro numero par da sequencia:");
        scanf("%d",&numero);

    while(cont <= 100)
    {
        printf("\n%d",numero);
        numero = numero +2;
        cont = cont +1;

}


    return 0;
}
