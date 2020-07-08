#include <stdio.h>
#include <stdlib.h>

void fracao(float n, int *x, float *y){

    *x = n;
    *y = n- *x;


}

int main()
{
    float numero;
    int inteiro;
    float decimal;


    printf("digite um numero real:");
    scanf("%f",&numero);

    fracao(numero,&inteiro,&decimal);

    printf("o numero real: %.2f,\no numero inteiro: %d,\no numero decimal: %.2f",numero,inteiro,decimal);


    return 0;




}
