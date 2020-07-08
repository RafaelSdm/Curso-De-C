#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define RAND_MAX 10

int main()
{

    char numeros[4], comp[4], existe[5], mesmapos[5], opcao = 'S';
    int i = 0, j = 0, k = 0, flag = 0, indice_existe = 0, indice_mesmapos = 0;

    existe[5] = '\0';
    mesmapos[5] = '\0';

    printf("\nSeja bem vindo ao Jogo da Senha\n");

    while ( opcao == 'S' )
    {

        //Zera vetores
        memset(existe, '\0', sizeof(existe) );
        memset(mesmapos, '\0', sizeof(mesmapos) );
        memset(comp, '\0', sizeof(comp) );

        // Carrega valores do computador
        for ( i = 0; i < 4; i++ )
        {
            srand( (unsigned int) time( NULL ) );
            comp[i] = ( rand() % ( RAND_MAX - 1 ) ) + 48;

            // Se houve numero igual, refaz o rand()
            for ( j = 0; comp[j] != '\0'; j++ )
            {
                if ( ( comp[j] == comp[i] ) && ( i != j ) && ( flag == 0 ) )
                {
                    i--;
                    break;
                }
            }

        }

        // Numero de tentativas
        for ( i = 1; i <= 15; i++ )
        {

            // Zera controladores de indice
            indice_existe = 0;
            indice_mesmapos = 0;

            // Valores do usuario
            printf("Tentativa numero %d\nDigite seus 4 numeros (EX: 1234):\n", i);
            fflush( stdin );
            scanf("%s", numeros);

            for ( j = 0; j < 4; j++ ) // Para numeros[]
            {

                for ( k = 0; k < 4; k++ ) // Para comp[]
                {

                    if ( ( numeros[j] == comp[k] ) && ( indice_existe < 4 ) ) // Se existir, insere na lista existe[]
                    {
                        existe[indice_existe] = numeros[j];
                        indice_existe++;

                        if ( j == k ) // E se estiver na mesma posicao, insere na lista mesmapos[]
                        {
                            mesmapos[indice_mesmapos] = numeros[j];
                            indice_mesmapos++;
                        }

                    }

                }

            }

            // Lista valores do usuario que existem na senha
            for ( j = 0; existe[j] != '\0'; j++ )
                printf("Tem na senha: %c\n", existe[j] );

            // Lista valores do usuario que existem na senha e estão na mesma posicao
            for ( j = 0; mesmapos[j] != '\0'; j++ )
            {

                printf("Mesma posicao: %c\n", mesmapos[j] );

                if ( j == 3 ) // Se o array foi completo, então acertou a resposta
                {
                    printf("Parabens, acertou!!\n");
                    return 0;
                }

            }

        }

        printf("Infelizmente voce errou!\n");
        printf("Deseja jogar novamente? (S/N)\n");
        fflush(stdin);
        scanf("%c", &opcao );
        opcao = toupper( opcao );

    }

    return 0;

}
