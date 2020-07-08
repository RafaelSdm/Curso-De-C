#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dia[2];
    char mes[2];
    char ano[4];

    printf("diga o dia, mes e o ano :");
    gets(dia);
    gets(mes);
    gets(ano);


    printf("%d/%d/%d",dia,mes,ano);
}
