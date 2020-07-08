#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont =0;
    int idade;
    float peso;
    int peso10 =0;
    int peso20 =0;
    int peso30 =0;
    int peso40 =0;
    int pessoa =0;
    float media10,media20,media30,media40;

    while(cont < 20)
    {
        printf("\n------------------------");
        printf("\nqual a sua idade:");
        scanf("%d",&idade);
        printf("\nqual seu peso em kg:");
        scanf("%f",&peso);
        printf("\n------------------------");

        cont = cont + 1;

        if(idade <=10)
        {
            pessoa = pessoa +1;
            peso10 = peso10+ peso;
            media10 = peso10/pessoa;
        }else if((idade > 11) &&(idade <= 20) )
        {
            pessoa = pessoa + 1;
            peso20 =  peso20 + peso;
            media20 = peso20/pessoa;
        }else if((idade > 21)&&(idade <= 30))
        {
            pessoa = pessoa +1;
            peso30 = peso30 + peso;
            media30 = peso30/pessoa;
        }else if(idade > 31)
        {
            pessoa = pessoa +1;
            peso40 = peso40 + peso;
            media40 = peso40/pessoa;
        }
    }
    printf("\n a media das pessoas de ate 10 anos de idade e de : %2.f",media10);
    printf("\n a media  das pessoas de 11 a 20 anos de idade e de : %2.f",media20);
    printf("\n a media das pessoas de 21 a 30 anos de idade e de : %2.f",media30);
    printf("\n a media das pessoas de 31 anos pra cima e de: %2.f",media40);

}
