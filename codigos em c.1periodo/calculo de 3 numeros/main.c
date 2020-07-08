#include <stdio.h>
#include <stdlib.h>

int main(){

int n1,n2,n3,calculo;

printf("digite o primeiro numero:");
scanf("%d",&n1);
printf("digite o segundo numero: ");
scanf("%d",&n2);
printf("digite o terceiro numero:");
scanf("%d",&n3);

calculo = (n1*n2) - n3;
printf("o resultado do calculo eh de: %d",calculo);

return 0;


}

