#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cont;
    float denominador, numerador;
    float s;
    float inversao = 1.0;

    for(cont =1.0;cont <=10;cont = cont +1)
    {
        numerador = cont + 1;
        denominador = cont * cont;


        s = s +(inversao*(numerador/denominador));
        printf("\n %f",s);

        inversao = inversao * -1.0;
    }
    printf("%f",s);
}
