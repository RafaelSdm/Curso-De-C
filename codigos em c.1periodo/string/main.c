#include <stdio.h>
#include <stdlib.h>

int main ()
{
	//Armazena a data que sera entrada
	char data[20];
	int i = 0;

	int dia, mes, ano;

	int tmp = 0;

	while (1)
	{
		printf ("DD\\MM\\AAAA\n");
		scanf ("%s", data);

		//Coloca \0 nas posicoes esperada de forma manual
		data[2] = '\0';
		data[5] = '\0';

		// Onde fica a primeira barra
		dia = MyAtoi (data);
		mes = MyAtoi (&data[3]);
		ano = MyAtoi (&data[6]);

		printf ("%d\t%d\t%d\n", dia, mes, ano);
	}

    return (0);
}
