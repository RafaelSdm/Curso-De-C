#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,financiamento,concessao;

    printf("qual seu salario?:");
    scanf("%f",&salario);
    printf("qual o valor do financiamento?:");
    scanf("%f",&financiamento);

    concessao = (financiamento / salario);

    if( concessao >=5.1)
    {
        printf("reprovado seu financiamento");
    }else
    {
        printf("aprovado seu financiamento");
    }
}
