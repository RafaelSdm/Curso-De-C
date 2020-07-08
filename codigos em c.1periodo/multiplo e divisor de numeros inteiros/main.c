#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;


    printf("digite um numero:");
    scanf("%d",&n1);
    printf("digite um segundo numero:");
    scanf("%d",&n2);

    if(n1 %n2 ==0)
    {
        printf("\no nunero %d e multiplo de %d",n1,n2);
    }else
    {
        printf("\n o numero %d nao e multiplo de %d",n1,n2);
    }
    if(n1 % n2 ==0)
    {
        printf("\no numero %d e divisor de %d",n1,n2);
    }else
    {
        printf("\no numero %d nao e divisor de %d",n1,n2);
    }
    return 0;
}
