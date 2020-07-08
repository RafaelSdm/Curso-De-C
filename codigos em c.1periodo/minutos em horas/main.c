#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int horas;
    int minutos;



}hm;

int main()
{
   hm a;
   int hr,min;
   int horario;

   printf("informe o numero do qual queira saber em formato de horas e minutos:\n");
   scanf("%d",&a.minutos);

   a.horas = a.minutos / 60;
   min = a.minutos %60;

   printf("\n%d horas e  %d minutos",a.horas,min);

}
