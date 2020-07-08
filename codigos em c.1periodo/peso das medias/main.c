#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char nome[30];
    int codigo;
    float nota1;
    float nota2;



}aluno;

int main()
{
    aluno a[10];
    int i;
    float media[10];


    for(i=0;i<10;i++){
        printf("informe sua matricula:\n");
        scanf("%d",&a[i].matricula);
        printf("informe seu codigo do curso:\n");
        scanf("%d",&a[i].codigo);
        getchar();
        printf("Diga seu nome:\n");
        gets(a[i].nome);
        //getchar();
        printf("informe sua primeira nota:");
        //getchar();
        scanf("%f",&a[i].nota1);
        printf("informe a segunda nota:");
        //getchar();
        scanf("%f",&a[i].nota2);

        printf("\n");
        getchar();

    }

    //verificando as medias dos alunos:

    for(i=0;i<10;i++){
        media[i] = ((a[i].nota1 * 1) + (a[i].nota2 *2)) /2;


    }
    printf("_____________________\n");
    printf("Dados dos alunos:\n");
    printf("_____________________\n");

    for(i=0;i<10;i++){
        printf("nome:%s\n",a[i].nome);
        printf("matricula:%d codigo: %d\n",a[i].matricula,a[i].codigo);
        printf("nota 1: %.2f nota 2 : %.2f\n",a[i].nota1,a[i].nota2);
        printf("media das notas: %.2f\n",media[i]);

        printf("______________________________________________________\n\n");


        printf("\n");
    }

}
