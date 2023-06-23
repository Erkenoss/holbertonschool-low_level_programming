#include "main.h"

/**
* times_table - check the code
*
* Return: Always 0.
*/

void times_table(void)
{
	int hauteur;
	int largeur;
	int aire;

	for (hauteur = 0; hauteur < 10; hauteur++)
	{
		_putchar('0');	
		for (largeur = 1; largeur < 10; largeur++)
		{
			aire = largeur * hauteur;
			_putchar(',');
			_putchar(' ');
			if (aire / 10 == 0)
				_putchar(' ');
			else
				_putchar(aire / 10 + '0');
		
		_putchar(aire % 10 + '0');
		}
		_putchar('\n');
		
	}	
}
