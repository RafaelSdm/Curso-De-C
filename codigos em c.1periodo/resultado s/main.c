#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cont =1.0;
    float numerador, denominador;
    float soma;
    float inversao = 1.0;
    float s =0;

    while(cont <= 10)
    {
        numerador = cont;
        denominador = cont*cont;

        s =  inversao*(numerador/ denominador);
        printf("\n %f", s);

        inversao =  inversao * -1.0;



        cont = cont +1;


    }
    printf("\n%f", s);

    }
