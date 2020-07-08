#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void posicao_errada(int resultado[]){
    int i;
    for (i = 0; i < 4; i++){
        if (resultado[i] != -1 && resultado[i] != 1){
            resultado[i] = 0;
        }
    }
}

void posicao_certa(int senha[], int tentativa[], int resultado[], int *cont){
    int i, c = 0;
    for (i = 0; i < 4; i++){
        if (senha[i] == tentativa[i]){
            resultado[i] = 1;
            c++;
        }
    }
    *cont = c;
}

void nao_faz_parte(int senha[], int tentativa[], int resultado[]){
    int i, j, cont;
    for (i = 0; i < 4; i++){
        cont = 0;
        for (j = 0; j < 4; j++){
            if (tentativa[i] == senha[j]){
                cont++;
                break;
            }
        }
        if (cont == 0){
            resultado[i] = -1;
        }
    }
}

int verifica_repetidos(int senha[], int tamanho_atual, int numero){
    for (int i = 0; i < tamanho_atual; i++){
        if (senha[i] == numero){
            return 1;
        }
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    system("color 1B");
    int i, n, senha[4], tentativa[4], cont, tentativas, resultado[4], resp;
    srand(time(NULL));
    printf("=============================\n\n");
    printf(" BEM VINDO AO JOGO DA SENHA! \n\n");
    printf("=============================\n\n");
    printf("O objetivo do jogo é fazer você acertar os números fornecidos pelo computador!\n");
    printf("\nO computador irá pensar em 4 números distintos, faça o mesmo! Você terá no máximo 10 tentativas!\n");
    printf("\nO computador sai jogando...\n\n");
    printf("O computador acaba de lançar a sua senha...\n");
    printf("\nAgora é a sua vez de jogar!\n\n");
    for (i = 0; i < 4; i++){
        do {
            n = rand() % 10;
        }while (verifica_repetidos(senha, i, n) == 1);
        senha[i] = n;
    }
    for (tentativas = 1; tentativas <= 10; tentativas++){
        cont = 0;
        printf("TENTATIVA %d\n\n", tentativas);
        while (cont < 4){
            printf("Informe o %dº dígito da senha: ", cont + 1);
            scanf("%d",&tentativa[cont]);
            if(tentativa[cont] > 9 || tentativa[cont] < 0){
                printf("Valor Invalido! ");
            }else if (verifica_repetidos(tentativa, cont, tentativa[cont])){
                printf("Valor Repetido! ");
            }else{
                cont++;
            }
        }
        printf("\nSua tentativa: ");
        for (i = 0; i < 4; i++){
            resultado[i] = -2;
            printf("%d\t", tentativa[i]);
        }
        nao_faz_parte(senha, tentativa, resultado);
        posicao_certa(senha, tentativa, resultado, &resp);
        posicao_errada(resultado);
        printf("\nResultado:     ");
        for (i = 0; i < 4; i++){
            printf("%d\t", resultado[i]);
        }
        if ((tentativas == 5)&&(resp !=4)){
            printf("\n\nDICAS:\n");
            printf("a) 1 significa que o valor está na posição correta\n");
            printf("b) 0 significa que o valor está na posição errada \n");
            printf("c) -1 significa que o valor não faz parte da senha  ");
        }
        printf("\n\n");
        if (resp == 4){
            break;
        }
    }
    if (resp == 4){
        system("color 5");
        printf("Você ganhouuuu!!! ");
    }else{
        system("color C");
        printf("GAME OVER!\n\nSenha correta: ");
        for (i = 0; i < 4; i++){
            printf("%d ", senha[i]);
        }
    }
    fflush(stdin);
    getchar();
    return 0;
}
