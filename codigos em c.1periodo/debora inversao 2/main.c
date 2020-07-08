#include <stdio.h>
#include <stdlib.h>

void invertido(int n, int vInver[]){
    int invertendo[20], i, j;
    //variavel invertendo p guardar os numeros invertidos
    for(i=0; i<20; i++){
        invertendo[i] = vInver[n];
        n--;
    }

    for(i=0;i<20;i++){
        printf("[%d]",invertendo[i]);
    }
}

int main(){
    int vetorOriginal[20], i;
    srand(time(NULL));

    for(i=0; i<20; i++){
        printf("[%d]", vetorOriginal[i]=rand()%10);
    }
    printf("\n\n");



    invertido(19,vetorOriginal);

}
