#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas,horasE,salarioM,horaT,horasEX,salario_bruto,salario_extra,salarioF;


    printf("informe suas horas de trabalho:");
    scanf("%f",&horas);
    printf("informe suas horas extra de trabalho");
    scanf("%f",&horasE);
    printf("salario minimo atual:");
    scanf("%f",&salarioM);

    horaT = (salarioM/8);
    horasEX = (salarioM/4);

    salario_bruto = horas * horaT;
    salario_extra = horasE * horasEX;

    salarioF = salario_bruto + salario_extra;

    printf("o salario do funcionario e de RS %f",salarioF);
}

