#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 10;

    float *p;

    p = &n;

    scanf("%f", p);

    printf("%f",n);
}
