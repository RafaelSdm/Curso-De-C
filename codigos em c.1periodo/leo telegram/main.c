#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
 int i=1,nota,prova1,prova2,prova3;
 int trab1,trab2,trab3,trab4;
 int resp;
 int media=0;
 float somaP =0, somaT =0;
 float mediaFinal =0;

 printf("Nota dos Alunos\n\n");

 while (i !=0){
  printf("\nInforme a prova 1: ");
  scanf("%d",&prova1);
  printf("\nInforme a prova 2: ");
  scanf("%d",&prova2);
  printf("\nInforme a prova 3: ");
  scanf("%d",&prova3);

  somaP=(prova1+prova2+prova3)/3;
  printf("\n _MEDIA DAS PROVAS_: %f\n\n ",somaP);


  printf("\nInforme a nota do trabalho 1: ");
  scanf("%d",&trab1);

  printf("\nInforme a nota do trabalho 2: ");
  scanf("%d",&trab2);

  printf("\nInforme a nota do trabalho 3: ");
  scanf("%d",&trab3);

  printf("\nInforme a nota do trabalho 4: ");
  scanf("%d",&trab4);

  somaT=(trab1+trab2+trab3+trab4)/4;
  printf("\n _MEDIA DOS TRABALHOS_: %f\n\n ",somaT);

  media= somaT + somaP;
  printf("Media do Aluno: %d\n\n ",media);

  if(media >=6){
    mediaFinal = (0.8 * somaP) + (0.2 *somaT);
    printf("Situacao do aluno: APROVADO!\n");
    printf("Media final: %f\n",mediaFinal);
  }else{
    mediaFinal = 0.6 * somaP;
    printf("Situacao do aluno: REPROVADO!");
    printf("Media finaç:%f\n",mediaFinal);
    }


  printf("\nDeseja continuar? Digite 1 para continuar e 0 para sair... ");
  scanf("%d",&resp);

  if(resp ==1){
    mediaFinal = 0;
    media =0;
    somaP =0;
    somaT =0;
   i=1;
  }else{
   i=0;
  }
 }
 return 0;

// printf("media das provas: %f",somaP);
 //printf("media dos trabalhos:%f",somaT);
}
