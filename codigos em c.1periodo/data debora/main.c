#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	int dia;
	int mes;
	int ano;
}data;

int bissexto(int ano){
    if((ano%4==0) && ((ano%100!=0) || (ano%400==0))){
       return 1;
       }
}
// if o ano for bissexto vai retornar 1 e esse 1 inclui mais um dia no mes de fevereiro

int diferencaAnos(int ano1, int ano2){
    int diferenca;
    diferenca = (ano1 - ano2) * 365;
    return diferenca;
}

int calculoDias(int dia, int mesF, int ano){
    int numeroDias, mesFornecido, cont=0, mes;

    for(mes=1; mes<mesF; mes++){
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        cont = cont+31;
    }
    if(mes==4 || mes==6 || mes==9 || mes==11){
        cont = cont+30;
    }
    if(mes==2){
            if(bissexto(ano==1)){
                cont = cont + 29;
            }else{
                cont = cont + 28;
            }
        }
    }
    numeroDias = dia + cont;

    return numeroDias;
   }

   int main(){
       setlocale(LC_ALL, "portuguese");
    int diferenca;
    data d1, d2;

    printf("Insira a data mais antiga com o formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    printf("Insira a data mais recentecom o formato DD/MM/AAAA: ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    diferenca = (calculoDias(d2.dia, d2.mes, d2.ano) - calculoDias(d1.dia, d1.mes, d1.ano) - diferencaAnos(d1.ano, d2.ano) );
    printf("A diferença entre dias e: %d", diferenca);

    return 0;
}
