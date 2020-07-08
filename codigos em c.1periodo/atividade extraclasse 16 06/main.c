#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data1;


int main()
{
    data1 a,b;
    int i =1;
    data2 b;
    int j =1;



    printf("_____________________________\n");
    printf("Calculo da diferenca de dias:\n");
    printf("_____________________________\n");


    printf("informe as datas que voce queira saber a diferenca:\n\n");
    while(i!=0){
        printf("informe o dia:");
        scanf("%d",&a.dia);

        printf("informe agora o mes:");
        scanf("%d",&a.mes);

        printf("agora informe o ano:");
        scanf("%d",&a.ano);

        if((a.dia <= 31)&&(a.mes <= 12)){
            printf("\n\ndatas validas!");
            i = 0;
        }else{
            printf("\n\ndatas invalidas!\n");
            printf("informe novamente!");
            i = 1;
        }

    }

    //i = 1;

   // printf("\na primeira data informada foi: %d/%d/%d\n\n",a.dia,a.mes,a.ano);

    printf("\nagora informe a segunda data:\n\n");

    while(j !=0){
        printf("informe o nova dia:");
        scanf("%d",&b.dia2);

        printf("informe o mes:");
        scanf("%d",&b.mes2);

        printf("diga o ano:");
        scanf("%d",&b.ano2);

        if((b.dia2 <= 31)&&(b.mes2 <= 12)){
            printf("\ndatas validas!\n");
            j = 0;
        }else{
            printf("\n\ndatas invalidas!\n");
            printf("digite novamente!");
            j = 1;
        }
    }

    printf("\na primeira data informada foi: %d/%d/%d\n\n",a.dia,a.mes,a.ano);
    printf("\na segunda data informada  foi %d/%d/%d/\n",b.dia2,b.mes2,b.ano2);

    printf("\nverificação dos anos bissestos:\n");

    if (a.mes ==2){

        if((a.ano %4 == 0)&&(a.ano %400 == 0)||(a.ano %100 != 0)){
            //printf("o ano %d e bissexto",a.ano);

            if (a.dia > 29){
                printf("o mes nao corresponde!");
                return 0;
            }else if(a.dia >28){
                printf("o mes esta certo!");
            }

        }else{


        }
}

    printf("\nvai tomar no cu!");

    if(b.mes2 ==2){
        if((b.ano2 %4 ==0)&&(b.ano2 %400 ==0)||(b.ano2 %100 != 0)){
            if (b.dia2 > 29){
                printf("\no mes nao corresponde!");
                return 0;
            }else if(b.dia2 > 28){
                printf("\n o mes nao corresponde!");
                return 0;


            }
        }else{

        }
    }

    printf("\nvai tomar no cu tambem!");
}
