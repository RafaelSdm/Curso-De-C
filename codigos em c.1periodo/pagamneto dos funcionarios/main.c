#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horasT,horasE,salario,novo_salario,hora_trabalhada,salario_bruto,hora_extra,salario_extra;


    printf("Horas trabalhadas:");
    scanf("%f",&horasT);
    printf("Horas extras trabalhadas:");
    scanf("%f",&horasE);
    printf("Salario minimo atual:");
    scanf("%f",&salario);

    hora_trabalhada = salario /8;
    hora_extra = salario /4;

    salario_bruto = hora_trabalhada * horasT;
    salario_extra = hora_extra * horasE;

    novo_salario = salario_bruto + salario_extra;

    printf("o salario do funcionario tem o valor de: RS %2.f",novo_salario);

}
