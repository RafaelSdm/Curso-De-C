#include <stdio.h>
#include <stdlib.h>

void fatorial(int n){

    int i;
    int fat =1;

    for(i=n;i<=1;i--){
        fat = fat *i;

    }

    printf("o fatorial é: %d",fat);

    return;
}

int main()
{
    int numero;

    printf("digite um numero para sser fatorado:");
    scanf("%d",&numero);

    fatorial(numero);

    return 0;


}
