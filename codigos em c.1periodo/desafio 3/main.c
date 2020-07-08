
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vetor[25], i, n = 10;
    vetor[0] = 1;
    vetor[1] = 6;
    for (i = 2; i < 25; i++){
        vetor[i] = vetor[i - 1] + n;
        n = n * 2;
    }
    for (i = 0; i < 25; i++){
        printf("%d ", vetor[i]);
    }
    getchar();
    return 0;
}

