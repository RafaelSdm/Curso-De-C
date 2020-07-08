#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x [30];
    int tam;
    int i;
    int cont =0;

    printf("digite uma palavra ou um pequeno texto:\n");
    gets(x);

    tam = strlen(x);

    printf("\na forma invertida:\n");
    for(i=tam -1;i >=0;i--){
        printf("%c",x[i]);


    }
    for(i=tam -1;i >=0;i--){
        if((x[i]=='a')||(x[i]=='e')||(x[i]==i)||(x[i]=='o')||(x[i]=='u')||(x[i]=='i')){
            cont++;
        }
    }


    printf("\n");
    printf("numero de vogais: %d",cont);

    system("pause");
    return 0;


}
