#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;

    printf("digite o primeiro valor:");
    scanf("%d",&n1);
    printf("digite o segundo numero:");
    scanf("%d",&n2);
    printf("digite o terceiro nunero:");
    scanf("%d",&n3);

    if(n1<n2 && n2<n3)
    {
        printf("em ordem crescente: %d,%d,%d",n1,n2,n3);
    }else if(n2<n1 && n1<n3)
    {
        printf("em ordem crescente: %d,%d,%d",n2,n1,n3);
    }else if (n2<n3 && n3<n1)
    {
        printf("em ordem crescente: %d,%d,%d,",n2,n3,n1);
    }else if (n1<n3 && n3<n2)
    {
        printf("em ordem crescente: %d,%d,%d",n1,n3,n2);
    }else if (n3<n1 && n1<n2)
    {
        printf("em ordem crescente: %d,%d,%d",n3,n1,n2);
    }else if (n3<n2 && n2<n1)
    {
        printf("em ordem crescente: %d,%d,%d,",n3,n2,n1);
 return 0;
    }
}
