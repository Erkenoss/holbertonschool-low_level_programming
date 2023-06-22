#include "main.h"

/**
* print_most_numbers - Description pour main
* Whose idea was it to create Betty? Next on the third exercise.
* You have a good story to tell. So, why Betty is useless?
* Maybe because there is nothing to learn with her?
* Oh! Yes, you are right, for take the good habit!
* But now, we lost our time because we are affraid of you... Betty
* What am i suppose to think? Good habit does not depend on you.
* We all know that, you know... So, what am i suppose to think?
*
* Return: Always 0 (succes)
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar(10);
}
