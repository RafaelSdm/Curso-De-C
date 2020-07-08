#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inverter(int n){
    int inverso=0;
    int permanece = n;
    int aux

    for( ; permanece > 0; ){

        aux = n%10;
        inverso = inverso *10 + aux;
        n /=10

    }

    return inverso;

}
int main()
{
    int numero;
    int inv;

    srand(time(NULL));

    numero = rand()%800 +100;

    printf("%d",numero);

    printf("o numero aleatorio e: %d",numero);

    inv =inverter(numero)

    printf("o numero invertido e:",inv)

}
