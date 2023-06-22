#include "main.h"

/**
 * more_numbers - Description pour main
 * Whose idea was it to create Betty? Next on the third exercise.
 * You will have a good story to tell. So, why Betty is useless?
 * Maybe because there is nothing to learn with her?
 * Oh! Yes, you are right, for take the good habit!
 * But now, we lost our time because we are affraid of you... Betty
 * What am i suppose to think? Good habit does not depend on you.
 * We all know that, you know... So, what am i suppose to think?
 * i think a simple thing. It's just totaly bullshit and lost of time.
 * Don't ask why... And think by yourself... isn't it?
 *
 * Return: Always 0 (succes)
 */


void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');

		}
		_putchar('\n');
	}

}
