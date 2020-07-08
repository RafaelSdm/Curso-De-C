#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[20];
    int pessoas;
    float renda;
    int cont =0;
    float desconto;
    float imposto=0;
    int tam;
    int y =0;



    printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
    printf("CALCULO DO IMPOSTO DE RENDA\n");
    printf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n");




        while(cont==0){
            printf("informe seu cpf por exemplo:000.000.000.00\n");
            fgets(cpf,20,stdin);
            tam = strlen(cpf);
            if((cpf[3]=='.')&&(cpf[7]=='.')&&(cpf[11]=='.')&& (tam ==15)){
                printf("\nCPF VALIDO!\n");
                cont++;
               // cont  = cont +0;
            }else{
                printf("\nCPF INVALIDO!");
                printf("\n digite novamente:!\n");
                cont = cont + 0;

            }

        }
        getchar();

        printf("\nnumero de pessoas dependentes:");
        scanf("%d",&pessoas);

        y = pessoas * 1500;

        //printf("o resultado de y e %d",y);

        printf("\nrenda anual:");
        scanf("%f",&renda);

        desconto = renda - y ;
        printf("o desconto e de %.2f\n",desconto);

        if(desconto <= 28.000){
            printf("O pertecente do cpf numero %s esta isento ao pagamento do imposto de renda",cpf);
        }else if((desconto >= 28.001) && (desconto <= 40.000)){
            imposto = desconto -(desconto *15/100);
            printf("o pertecente do cpf numero %s ira pagar um total de R$ %.2f",cpf,imposto);
        }else if((desconto >= 40.001) &&(desconto <= 50.000)){
            imposto = desconto -(desconto * 10/100);
            printf("o perteccente do cpf numero %s ira pagar um total de R$ %.2f",cpf,imposto);
        }else{
            imposto = desconto -(desconto * 27/100);
            printf("o pertecente do cpf numero %s ira pagar um total de R$ %.2f",cpf,imposto);
        }

        return 0;




}





