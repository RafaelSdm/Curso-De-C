#include <stdio.h>
#include <stdlib.h>
void inverter(int *x,int *y){

    int aux;
    aux = *x;
    *x = *y;
    *y = aux;

    return;


}
int main()
{
    int numero,numero2;


    printf("digite o primeiro numero:");
    scanf("%d",&numero);
    printf("informe o segundo numero:");
    scanf("%d",&numero2);

    printf("\n\ninvertendo os valores:\n\n");

    inverter(&numero,&numero2);

    printf("o primeiro numero tem o valor de:%d\n",numero);
    printf("o segundo numero tem o valor de:%d\n",numero2);


}
