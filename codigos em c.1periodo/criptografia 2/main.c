#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[200];
    int i;
    int tamanho;
    char d;
    int e;

    printf("digite uma palavra ou um pequeno texto:\n\n");
    gets(palavra);

    tamanho = strlen(palavra);

    printf("\na criptografia da frase e:\n\n");

    for(i=0;i<tamanho;i++){
        if(palavra[i]=='z'){
            d = palavra[i];
            e = d -23;
        }else if(palavra[i]=='Z'){
            d = palavra[i];
            e = d-23;
        }else if(palavra[i]=='Y'){
            d = palavra[i];
            e =d-23;
        }else if(palavra[i]=='X'){
            d = palavra[i];
            e = d-23;

        }else if(palavra[i]==' '){
              d = palavra[i];
              e = d - 33;


        }else if(palavra[i] =='y'){
            d = palavra[i];
            e = d - 23;
        }else if(palavra[i]=='x'){
            d = palavra[i];
            e = d - 23;

        }else{
            d = palavra[i];
            e = d+3;
        }

        d = palavra[i];


       printf("%c",e);
    }
    printf("\n\n");

    system("pause");
    return 0;

}
