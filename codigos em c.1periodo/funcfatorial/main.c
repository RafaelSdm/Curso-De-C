#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    int i;
    int fat =1;

    for(i=n;i>=1;i--){
        fat = fat * i;
    }

    return fat;


}

int main()
{
    int numero;
    int fatora;

    printf("digite um numero pelo qual irá ser fatorado:");
    scanf("%d",&numero);

    fatora = fatorial(numero);

    printf("o fatoria do numero é: %d",fatora);



    return 0;
}

