#include <stdio.h>
#include <stdlib.h>

int soma(int n){

    int i;
    int somar =0;

    for(i=n;i>=1;i--){
        somar = somar +i;
    }

    return somar;


}

int main()
{
    int numero;
    int somatorio;

    printf("digite um numero qe ira ser somado por seus antecessores:");
    scanf("%d",&numero);

    somatorio = soma(numero);

    printf("o resultado da soma é de: %d",somatorio);
}
