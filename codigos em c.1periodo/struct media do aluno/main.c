#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int nota1;
    int nota2;
    int nota3;
    char nome[30];
    int matricula;

}aluno;
int main()
{
    aluno a[5];
    int i;
    float media[5];

    for(i=0;i<5;i++){
        printf("----------------------\n");
        printf("informe seu nome:");
        fgets(a[i].nome,30,stdin);
        printf("informe sua matricula:");
        scanf("%d",&a[i].matricula);
        printf("informe sua primeira nota");
        scanf("%d",&a[i].nota1);
        printf("informe sua segunda nota:");
        scanf("%d",&a[i].nota2);
        printf("informe sua teeceira nota:");
        scanf("%d",&a[i].nota3);
        printf("=========================\n\n");

        getchar();

       media[i] = (a[i].nota1 + a[i].nota2 + a[i].nota3) /3;



    }

    printf("dados dos alunos:");

    for(i=0;i<5;i++){
        printf("NOME = %s\n",a[i].nome);
        printf("matricula = %d\n",a[i].matricula);
        printf("suas notas = %d,%d,%d\n",a[i].nota1,a[i].nota2,a[i].nota3);
        printf("a media sua foi de %f\n",media[i]);




    }

    for(i=0;i<5;i++){
        if(a[i].nota1> a[i].nota2 && a[i].nota1 > a[i].nota3){
            j = i;
        }else if(a.nota2 > a.nota1 && a.nota2 > a.nota3){
            j = i;
        }else{
            j =i;
        }
    }

    for(i=0;i<5;i++){
        if(a[i].nota1< a[i].nota2 && a[i].nota1 < a[i].nota3){
            k = i;
        }else if(a[i].nota2 < a[i].nota1 && a[i].nota2 <a[i].nota3){
            k = i;
        }else{
            k =i;
        }
    }

    printf("o aluno %s possui a maior media escolar",a[j].nome);
    printf("o aluno %s possui a menor media escolar",a.[k].nome);

}
