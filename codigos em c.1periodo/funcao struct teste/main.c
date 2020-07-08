#include <stdio.h>
#include <stdlib.h>

typedef struct{

    char nome[20];
    char curso[30];
    int matricula;


}chamada;

int main()
{
    chamada aluno[5];
    int i;

    for(i=0;i<5;i++){
        printf("\n-==-==-==-==-==-==-==-==-==-\n");
        printf("diga seu nome:");
        gets(aluno[i].nome);
        printf("informe seu curso:");
        gets(aluno[i].curso);
        printf("Digite sua matricula:");
        scanf("%d",&aluno[i].matricula);
        printf("\n-==-==-==-==-==-==-==-==-==-=-\n");
        getchar();
    }

    printf("Dados dos alunos para ser imprimido:\n");

    for(i=0;i<5;i++){
        printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");
        printf("\nAluno: %s\n",aluno[i].nome);
        printf("Curso: %s\n",aluno[i].curso);
        printf("Matricula: %d\n",aluno[i].matricula);
        printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
       // getchar();
    }
}
