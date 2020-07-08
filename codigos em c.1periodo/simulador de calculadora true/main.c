#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float n1,n2,soma,sub,mult,div;


    printf("\n------------------------------------");
    printf("\n    SIMULADOR DA CALCULADORA");
    printf("\n------------------------------------");

    printf("\nQual opcao de calculo voce deseja fazer?");


    printf("\n----------------------------------------");
    printf("\nPara fazer uma soma [1]");
    printf("\nPara fazer uma subtracao [2]");
    printf("\nPara uma multiplicaçao [3]");
    printf("\nPara uma divisao [4]");
    printf("\n-----------------------------------------");

    printf("\nqual opcao voce escolheu?:");
    scanf("%d",&opcao);

    switch(opcao){

    case 1:
        printf("digite o primeiro numero:");
        scanf("%f",&n1);
        printf("digite o segundo numero:");
        scanf("%f",&n2);
        soma = (n1+n2);
        printf("O valor da soma e de %2.f",soma);
        break;

    case 2:
        printf("digite o primeiro numero:");
        scanf("%f",&n1);
        printf("digite o segundo numero:");
        scanf("%f",&n2);
        sub = (n1-n2);
        printf("O resultado da subtracao e de %2.f",sub);
        break;

    case 3:
        printf("digite o primeiro numero:");
        scanf("%f",&n1);
        printf("digite o segundo numero:");
        scanf("%f",&n2);
        mult = (n1*n2);
        printf("O valor da multiplicacao e de %2.f",mult);
        break;

    case 4:
        printf("digite o primeiro numero:");
        scanf("%f",&n1);
        printf("digite o segundo numero:");
        scanf("%f",&n2);
        div = (n1/n2);
        printf("O valor da divisao e de %f",div);
        break;

    default:
        printf("nenhuma das opcoes da calculadora foi aceita,digite feche o programa e tente novamente");
    }
    return 0;
}
