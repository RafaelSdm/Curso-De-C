#include <stdio.h>
#include <stdlib.h>

int maior(int n,int u, int m){

    if((n>u)&&(n>m)){
        return 1;
    }else if((u>n)&&(u>m)){
        return 0;
    }else{
        return 2;
    }


}

int main()
{
    int a,b,c;

    printf("digite um numero:");
    scanf("%d",&a);

    printf("digite um numero novamente:");
    scanf("%d",&b);

    printf("outro numero por favor:");
    scanf("%d",&c);

    if(maior(a,b,c)==1){
        printf("o maior numero e:%d",a);

    }else if(maior(a,b,c)==0){
        printf("o maior numero e:%d",b);
    }else{
        printf("o maior numero e:%d",c);
    }

    return 0;

}
