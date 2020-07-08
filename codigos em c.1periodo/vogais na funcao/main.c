#include <stdio.h>
#include <stdlib.h>

int contador(char vet[40],int tam){
    int i;
    int vogal =0;
    for(i=0;i<tam;i++){
        if((vet[i]=='a')||(vet[i]=='e')||(vet[i]=='i')||(vet[i]=='o')||(vet[i]=='u')){
            vogal++;
        }
    }

    return vogal;



}

int main()
{
    char texto[40];
    int tam;

    printf("informe uma palavra ou um pequeno texto:\n\n");
    fgets(texto,40,stdin);
    tam = strlen(texto);

    printf("a palavra %s possui %d palavras vogais",texto,contador(texto,tam));
}
