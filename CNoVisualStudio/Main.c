#include <stdio.h>

int main()
{
	int a = 0, b = 1;
	char comando;

	

	do
	{
		system("cls");
		b = 1;

		printf("Digite um numero com raiz inteira: ");
		scanf_s("%d", &a);

		while (b != a)
		{
			if ((b*b) == a)
			{
				printf("A raiz quadrada de %d eh %d", a, b);
				break;
			}
			else
			{
				b++;
			}
		}

		if (b >= a)
		{
			printf("O numero digitado nao contem raizes inteiras.");
		}

		// Limpa o buffer de entrada
		scanf_s("%*[^\n]");
		scanf_s("%*c");

		printf("\r\nDeseja continuar (S/N)? ");
		scanf_s("%c", &comando);

		// Limpa o buffer de entrada
		scanf_s("%*[^\n]");
		scanf_s("%*c");

	} while (comando == 's' || comando == 'S');

	
}