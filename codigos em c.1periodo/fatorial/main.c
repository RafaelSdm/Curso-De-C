#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fatorial;
    int i;
    int soma =1;

    printf("digite um numero pelo qual ira ser fatorado:");
    scanf("%d",&fatorial);

    for(i=fatorial;i>=1;i--){
        soma = soma *i;
    }
    printf("%d",soma);
}
