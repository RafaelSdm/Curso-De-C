#include <stdio.h>
#include <stdlib.h>

void mensagem(){
    printf("___________________________________\n\n");
    printf("__calculo da area do quadrado foda :)__\n\n");
    printf("___________________________________\n\n");

}

float calculo(float base,float altura){

    float area;

    area = base * altura;


    return area;

}

int main()
{
    float x;
    float y;
    float resultado;
    int cont;

    do{

    mensagem();

    printf("digitea base do quadrado:");
    scanf("%f",&x);
    printf("\ndigite a altura do quadrado:");
    scanf("%f",&y);

    resultado = calculo(x,y);

    printf("o valor da area do guadrado é de:%.2f\n",resultado);

    printf("quer calcular outra vez?\n");
    printf("digite 0 para sair ou 1 para continuar...");
    scanf("%d",&cont);


    }while(cont !=0);

    return 0;

}
