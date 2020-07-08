#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[20];
    int tam =0;
    printf("informe o seu cpf:");
    fgets(cpf,20,stdin);

    tam = strlen(cpf);

    printf("o cpf tem tamanho de %d\n",tam);




    if ((cpf[3] == '.') && (cpf[7]=='.') && (cpf[11] &&( tam ==15))){
        printf("cpf valido!");
    }else{
        printf("cpf inválido!");
    }

}
