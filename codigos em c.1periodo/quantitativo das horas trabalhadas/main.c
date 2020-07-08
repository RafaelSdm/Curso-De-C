#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    float horas,salario_minimo,horaT,horas_trabalhadas,extra,horaE,horas_extra,salario_bruto,quantia_extra,salario_receb;


    printf("Digite seu nome:");
    scanf("%s",&nome);
    printf("diga as horas trabalhadas:");
    scanf("%f",&horas);
    printf("salario minimo atual:");
    scanf("%f",&salario_minimo);
    printf(" horas extras feitas:");
    scanf("%f", &extra);

    horaT = salario_minimo*(1/8);

    horaE = salario_minimo * (1/4);

    salario_bruto = horaT * horas;

    quantia_extra = horaE * extra;

    salario_receb = salario_bruto + quantia_extra;

    printf("o funcionario devera receber o salario de RS %f",salario_receb);

    return 0;

}
