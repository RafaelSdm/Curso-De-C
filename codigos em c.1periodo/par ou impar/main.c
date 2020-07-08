#include <stdio.h>
#include <stdlib.h>

int main(){

int x;

printf(" Digite um numero:");
scanf("%d",&x);

if (x %2 > 0){
    printf("\nesse numero e impar");
    }else{
        printf("\nesse numero e par");
        }
if (x >=0){
    printf("\nesse numero e positivo");
    }else{
        printf("\nesse numero e negativo");
        }

}


