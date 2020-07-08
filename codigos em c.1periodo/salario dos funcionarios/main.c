#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont =0;
    int pessoas =0;
    int pessoas1 =0;
    float salario;
    float total_salario =0;
    float novoSalario;
    float aumento =0;

    while(cont < 100)
    {
        printf("Qual o seu salario:");
        scanf("%f",&salario);

        total_salario = total_salario + salario;

        if(salario >=2000)
        {
            pessoas = pessoas +1;
        }else if(salario < 2000)
        {
            pessoas1 = pessoas1 + 1;
            novoSalario = salario +(salario * 7.5/100);
        }

        aumento = novoSalario + total_salario;

        cont = cont + 1;
    }

    printf("\no custo de todos os funcionarios e de RS %2.f",total_salario);
    printf("\no numero de funcionarios que recebem menos de 2000 e de %d",pessoas);
    printf("\no numero de funcionarios que recebem mais de 2000 e de %d",pessoas1);
    printf("\no novo aumento ira ter o gasto de RS %2.f",aumento);
}
