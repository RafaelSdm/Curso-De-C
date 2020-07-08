#include <stdio.h>
#include <stdlib.h>
int fatorial(int n){

    if(n==0){
        return 1;
    }else{
        if(n %2 !=0){
        return n* fatorial(n-1);
        }else{
            return n;
        }
    }



}
int main()
{
    int numero;



    printf("digite um numero que ira ser fatorado:");
    scanf("%d",&numero);

    printf("o fatorial do numero é: %d",fatorial(numero));
}
