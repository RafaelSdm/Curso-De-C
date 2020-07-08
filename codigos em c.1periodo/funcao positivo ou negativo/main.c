#include <stdio.h>
#include <stdlib.h>

int positivo(int n){

    if(n > 0){
        return 0;
    }else{
        return 1;
    }

}

int main()
{
    int numero1;


    printf("informe um numero:");
    scanf("%d",&numero1);

    if(positivo(numero1)==0){
        printf("numero positivo!");
    }else{
        printf("numero negativo!");
    }

}
