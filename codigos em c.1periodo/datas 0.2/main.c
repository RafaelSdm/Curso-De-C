#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;



}data;

int bissexto1 (int ano){
    if((ano %4 ==0)&&(ano %100 != 0)||(ano %400 ==0)){
       return 1;
    }else{
        return 0;
    }



}

int somaDosAnoa(int anoA, int anoB){

    int compl =0;

    if(anoA > anoB){
        compl =(anoA - anoB) * 365;
        return compl;
    }else{
        compl =(anoA - anoB) * -1 *365;
    }   return compl;



}

int bissexto2 (int ano){
    if((ano %4 ==0)&&(ano %100 != 0)||(ano %400 ==0)){
        return 1;
    }else{
        return 0;
    }




}

int main(){

    data a,b;
    int i;
    int somadia=0;
    int qts =0;
    int soma =0;
    printf("_____________________________\n");
    printf("Calculo da diferenca de dias:\n");
    printf("_____________________________\n");


    printf("informe a primeira data:\n\n");
    printf("\ndia:");
    scanf("%d",&a.dia);
    printf("mes:");
    scanf("%d",&a.mes);
    printf("ano:");
    scanf("%d",&a.ano);
    printf("\n\nagora informe a segunda data:\n");
    printf("\ndia:");
    scanf("%d",&b.dia);
    printf("mes:");
    scanf("%d",&b.mes);
    printf("ano:");
    scanf("%d",&b.ano);

    printf("\nprimeira data informada: %d/%d/%d",a.dia,a.mes,a.ano);
    printf("\nsegunda data informada: %d/%d/%d",b.dia,b.mes,b.ano);

    // verificaçõa dos anos bissextos

    if(bissexto1(a.ano)==1){
        printf("\nano bissexto!");

    }else{
        printf("\nano normal!");
    }

    if(bissexto2(b.ano)==1){
        printf("\nano bissexto");

    }else{
        printf("\nano normal!");
    }

    // calculo da primeira data

    if(bissexto1(a.ano)==1){
        if(a.mes == 2){
            somadia = 29 - a.dia;
        }else if((a.dia == 1)||(a.dia ==3)||(a.dia == 5)||(a.dia)||(a.dia ==8)||(a.dia == 10)||(a.dia ==12)){
            somadia = 31 - a.dia;
        }else if((a.dia == 4)||(a.dia == 6)||(a.dia == 9)||(a.dia ==1)){
            somadia = 30 - a.dia;
        }
    }else{
         if(a.mes == 2){
            somadia = 28 - a.dia;
        }else if((a.dia == 1)||(a.dia ==3)||(a.dia == 5)||(a.dia)||(a.dia ==8)||(a.dia == 10)||(a.dia ==12)){
            somadia = 31 - a.dia;
        }else if((a.dia == 4)||(a.dia == 6)||(a.dia == 9)||(a.dia ==1)){
            somadia = 30 - a.dia;
        }


    }

    // calculo da segunda data

    // calculanddo os meses dentro dos mesmos

    for(i=1;i<=12;i++){
        if((i > a.mes)&&(i < b.mes)){
            if((a.dia ==2)&&(bissexto1(a.ano)==1)){
                soma = soma + 29;
            }else if((a.dia ==2)&&(bissexto1(a.ano)==0)){
                soma = soma + 28;
            }else if((a.dia == 1)||(a.dia ==3)||(a.dia == 5)||(a.dia)||(a.dia ==8)||(a.dia == 10)||(a.dia ==12)){
                soma = soma + 31;
            }else if((a.dia == 4)||(a.dia == 6)||(a.dia == 9)||(a.dia ==1)){
                soma = soma + 30;
            }
        }
    }

    qts = soma + somadia + b.dia + somaDosAnoa(a.ano,b.ano);

    printf("\n\n\na nesse periodo ira se passar %d dias ",qts);

}
