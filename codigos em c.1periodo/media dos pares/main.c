
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4;
    float m1, m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15;

    printf("digite o primeiro numero:");
    scanf("%d",&n1);
    printf("digite o segundo numero:");
    scanf("%d",&n2);
    printf("digite o terceiro numero:");
    scanf("%d",&n3);
    printf("digite o quarto numero:");
    scanf("%d",&n4);

    m1 =(n1+n2+n3+n4)/4;
    m2 = (n2 + n1)/2;
    m3 = (n3 +n4)/2;
    m4 = (n1+n2+n3)/3;
    m5 = (n2+n3+n4)/3;
    m6 = (n2 + n4)/2;
    m7 = (n1 + n4)/2;
    m8 =  (n1 +n3)/2;
    m9=  (n1 + n3 +n4)/3;
    m10= (n1+n2+n4)/3;
    m11= (n2+n3)/2;
    m12= n1/1;
    m13= n2/1;
    m14= n3/1;
    m15= n4/1;

    printf("segue abaixo os numeros pares:");

    if(n1 %2 ==0)
    {
        printf("\n%d\n",n1);
    }
    if(n2 %2 ==0)
    {
        printf("\n%d\n",n2);
    }
    if(n3 %2 ==0)
    {
        printf("\n%d\n",n3);
    }
    if(n4 %2 ==0)
    {
        printf("\n%d\n",n4);
    }


    if((n1 %2 ==0)&&(n2 %2 ==0)&&(n3 %2 ==0)&&(n4 %2 ==0))
    {
        printf("a media aritimetica e de %f",m1);
    }else if((n1 %2 ==0)&&(n2 %2 ==0))
    {
        printf("a media aritimetica e de %f",m2);
    }else if((n3 %2 ==0)&&(n4 %2 ==0))
    {
        printf("a media aritimetica e de %f",m3);
    }else if ((n1 %2 ==0)&&(n2 %2 ==0)&&(n3 %2 ==0))
    {
        printf("a media aritimetica e de %f",m4);
    }else if((n2 %2 ==0)&&(n3 %2 ==0)&&(n4 %2 ==0))
    {
        printf("a media aritimetica e de %f",m5);
    }else if((n2 %2 ==0)&&(n4 %2 ==0))
    {
        printf("a media aritimetica e de %f",m6);
    }else if((n1 %2 ==0)&&( n4%2 ==0))
    {
        printf("a media aritimetica e de %f",m7);
    }else if((n1 %2 ==0)&&(n3 %2 ==0))
    {
        printf("a media aritimtetica e de %f",m8);
    }else if((n1 %2 ==0)&&(n3 %2 ==0)&&(n4 %2 ==0))
    {
        printf("a media aritimetica e de %f",m9);
    }else if((n2 %2 ==0)&&(n4 %2 ==0)&&(n1 %2 ==0))
    {
        printf("a media aritimetica e de %f",m10);
    }else if((n2 %2 ==0)&&(n3 %2 ==0))
    {
        printf("a media aritimetica e de %f",m11);
    }else if(n1 %2 ==0)
    {
        printf("a nedia aritimetica e de %f",m12);
    }else if(n2 %2 ==0)
    {
        printf("a media aritimetica e de %f",m13);
    }else if(n3 %2 ==0)
    {
        printf("a media aritimetica e de %f",m14);
    }else if (n4 %2 ==0)
    {
        printf(" a media aritimetica e de %f",m15);
    }else
    {
        printf("todos os numeros sao impares");
    }
    return 0;

}
