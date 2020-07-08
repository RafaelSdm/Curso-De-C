#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    srand(time(NULL));

    for(i=0;i<100000;i++){
        printf("[%d]",rand()%10);
    }
}
