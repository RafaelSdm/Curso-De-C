#include <stdio.h>
#include <stdlib.h>

int main(){

float raio,altura,area;
float pi = 3.14;

printf("qual o valor do raio em metros:");
scanf("%f",&raio);
printf("qual o valor da altura em metros:");
scanf("%f",&altura);

area = 2*pi*raio*(raio+altura);
printf("o valor da area e de:%.2f",area);
return 0;
}
