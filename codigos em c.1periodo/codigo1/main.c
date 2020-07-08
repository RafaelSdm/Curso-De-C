#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoN,idade;
    char nome[30];
    float salario;

    printf("qual seu nome?: ");
    scanf("%s",&nome);

    printf("qual seu ano de nascimento:");
    scanf("%d",&anoN);

    printf("qual seu salario:");
    scanf("%f",&salario);

    idade = 2020 - anoN;

    printf("o seu nome e %s, voce nasceu em %d,tem a idade de %d anos e possui o salario de RS %.2f",nome,anoN,idade,salario);

    return 0;
    }



