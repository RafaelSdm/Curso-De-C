#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * fatorial(n-1);
    }



}

int main()
{
    int numero;

    printf("Digite umnuemro peloqual irá ser fatorado:");
    scanf("%d",&numero);

    printf("o numero fatorado e:%d",fatorial(numero));


}
