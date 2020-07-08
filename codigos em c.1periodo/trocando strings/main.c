#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x [1000];
    int i;
    char b[1];
    char c[1];
    int y =0;
    int tam;
    int y=0;


    printf("digite uma plavra ou um pequeno texto:");
    gets(x);

    tam = strlen(x);

    printf("digite uma letra que voce quer que seja substituida:");
    scanf("%c",&b);
    printf("agora digite uma letra que vooce queira adicionar :");
    scanf("%c",&c);


    for(i=0;i<=tam;i++){
        if(x[i]== b[0]){
            x[i]= c[0];
            y++;
        }else{
            x[i]= x[i];
        }


    }
    for(i=0;i<=tam;i++){
        printf("%c",x[i]);
    }
    printf("foram feitas %d trocas",y);
}
