#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int F(int n){

}

int main()
{
    double vetor[30], a, b;
    int i;

    vetor[0] = 5;
    vetor[1] = 13;

    for(i=2;i<30;i++){
        vetor[i] = (((vetor[i-1])*2) + ((vetor[i-2])+3));
        if (i == 15){
            a = vetor[i];
        }
        if (i == 29){
            b = vetor[i];
        }

    }

    for(i=0;i<30;i++){
        printf("%f \n",vetor[i]);
    }
    printf("\n\n%f ", b - a);

    getchar();
    return 0;
}
