#include <stdio.h>
#include <stdlib.h>
void contador(int vet[], int *y,int *x,int *f,int *m,int *n,int *p){
   // int a,b,c,d,e,f;
    int i;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int r=0;

    for(i=0;i<100000;i++){
        if(vet[i]==1){
            a++;
            *y = a;
        }else if(vet[i]==2){
            b++;
            *x = b;
        }else if(vet[i]==3){
            c++;
            *f = c;
        }else if(vet[i]==4){
            d++;
            *m = d;
        }else if(vet[i]==5){
            e++;
            *n = e;
        }else{
            r++;
            *p =r;
        }
    }


}
int main()
{
    int i;
    int vetor[100000];
    int a,b,c,d,e,f;
    float div;

    for(i=0;i<100000;i++){
        vetor[i] = rand()%6+1;


    }

    contador(vetor,&a,&b,&c,&d,&e,&f);

    printf("o numero 1 apareceu %d vezez\n",a);
    printf(" o numero 2 apareceu %d vezes\n",b);
    printf("o numero 3 apareceu %d vezes\n",c);
    printf(" o numero 4 apareceu %d vezes\n",d);
    printf("o numero 5 apareceu %d vezes\n",e);
    printf("o numero 6 apareceu %d vezes\n",f);



    if(a >16000){
        div = a/100000 *100;
        printf("a probabilidade deu certo e sua porcentagem foi de:%f",div);
    }else{
          printf("A probabilidade nao eu certo:");

    }
    if(b > 16000){
        printf("a probabilidade deu certo e sua porentagem foi de %f",div);
    }else{
        printf(" a probabilidade nao deu certo");
    }

    if(c >16000){
        div = c/100000 *100;
        printf("a probabilidade deu certo e sua porcentagem foi de:%f",div);
    }else{
          printf("A probabilidade nao eu certo:");
    }


    if(d >16000){
        div = 100/100000 *e;
        printf("\n\na probabilidade deu certo e sua porcentagem foi de:%f\n\n",div);
    }else{
          printf("A probabilidade nao eu certo:");

    }

    if(e >16000){
        div = (e/100000) *100;
        printf("a probabilidade deu certo e sua porcentagem foi de:%f",div);
    }else{
          printf("A probabilidade nao eu certo:");
    }

    if(f >16000){
        div = f/100000 *100;
        printf("a probabilidade deu certo e sua porcentagem foi de:%f",div);
    }else{
          printf("A probabilidade nao eu certo:");
    }
}
