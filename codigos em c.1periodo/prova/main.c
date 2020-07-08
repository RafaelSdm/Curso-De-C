#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
int nume,denomin;
float soma;

nume=1;
soma=0;

for(denomin=1; denomin<=50; denomin++){
soma=soma+ (float)nume/denomin;
nume=nume+2;
}
printf("%f",soma);
}
