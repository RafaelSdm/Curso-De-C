#include <stdio.h>
#include<stdlib.h>

int main (){

float salario, salarioFerias;

printf("valor do salario:");
scanf("%f",&salario);

salarioFerias = salario*1/3 + salario;

printf("seu salario dentro das ferias esta no valor de R$ %.2f", salarioFerias);

return 0;
}
