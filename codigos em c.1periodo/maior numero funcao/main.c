#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){

    if(x>y){
        return 1;
    }else{
        return 0;}

}

int main()
{
    int num, num1;

    printf("digite um numero:");
    scanf("%d",&num1);
    printf("digite novamente um novo numero:");
    scanf("%d",&num);

    if(maior(num1,num)==1){
        printf(" maior numero e: %d",num1);
    }else{
        printf("o maior numero e: %d",num);
    }

    return 0;
}
