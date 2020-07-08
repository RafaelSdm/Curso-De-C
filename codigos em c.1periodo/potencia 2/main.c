#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pot,num,i;
    int potencia;

    printf("digite um numero:");
    scanf("%d",&num);
    printf("digite outro numero:");
    scanf("%d",&pot);

    potencia = num * num;

    for(i=0;i<pot;i++){
        if(i >1){
            potencia = potencia * num;
        }

    }

    printf(" %d",potencia);
}
