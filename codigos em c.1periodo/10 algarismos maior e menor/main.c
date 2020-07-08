#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1;
    int numero;
    int numeroM;
    int numeroME;

    while(cont <= 10)
    {
        printf("digite o %d numero:",cont);
        scanf("%d",&numero);

        cont = cont + 1;

        if(cont ==1)
        {
            numeroME = numero;
            numeroM = numero;
    }

        if((numero > numeroM))
        {
            numeroM = numero;
        } else if(numero < numeroME)
        {
            numeroME = numero;

        }
    }

    printf("\no maior numero da sequencia e de : %d",numeroM);
    printf("\no menor numero da sequencia e de : %d",numeroME);
    return 0;
}
