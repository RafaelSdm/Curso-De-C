#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4, media;

    printf("Primeira nota:");
    scanf("%f",&n1);
    printf("Segunda nota:");
    scanf("%f",&n2);
    printf("Terceira nota:");
    scanf("%f",&n3);
    printf("Quarta nota:");
    scanf("%f",&n4);

    media =(n1+n2+n3+n4)/4;

    printf("a media do aluno e de: %.2f",media);

    if(media >= 7)
    {
        printf("\no aluno esta aprovado");
    }else if(media <4.9)
    {
        printf("\no aluno esta reprovado");
    }else if((media <= 6.9) && (media >=5))
    {
        printf("\no aluno esta de recuperacao");
return 0;

    }

}

