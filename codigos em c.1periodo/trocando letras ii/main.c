#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[100];
    int i;
    char a[1];
    char b[1];
    int tam;
    char letra;
    char letras;

    printf("digite uma palavra ou um pequeno texto:\n");
    gets(x);
    fflush(stdin);

    tam = strlen(x);

    printf("digite uma letra da qual quer que seja mudada:\n");
    gets(a);
    fflush(stdin);


    printf("%s\n\n",a);

    printf("digite uma letra que voce quer que seja trocada pela %s\n",a);
    gets(b);
   // fflush(stdin);

    printf("letra 1 = %s\n", a);
    printf("letra 2 = %s",b);

}
