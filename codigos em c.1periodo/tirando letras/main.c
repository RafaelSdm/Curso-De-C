#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    char a;
    char b;
    int i;
    int tam;
    printf("digite uma palavra ou um pequeno texto:\n");
    gets(x);

    tam =strlen(x);
    getchar();



   printf("digite a letra que vai ser substituida");
   scanf("%c",&a);

   getchar();

   printf("digite a letra que vai entrar nno texto:");
   scanf("%s",&b);

   getchar();

   printf("%c ,%c",a,b);
}
