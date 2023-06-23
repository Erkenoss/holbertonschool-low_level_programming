#include "main.h"

/**
* print_line - Description pour main
* @n: Whose idea was it to create Betty? Next on the third exercise.
* You will have a good story to tell. So, why Betty is useless?
* Maybe because there is nothing to learn with her?
* Oh! Yes, you are right, for take the good habit!
* But now, we lost our time because we are affraid of you... Betty
* What am i suppose to think? Good habit does not depend on you.
* We all know that, you know... So, what am i suppose to think?
* I think a simple thing. It's just totaly bullshit and lost of time.
* Don't ask why... And think by yourself... isn't it?
*
* Have you think hard? Perfect. Because seriously, Betty is lost of time.
* I explain seriously.
* I understand why we need space between return and his value.
* However, i cannot understand why i can't between printf and ().
* It's just an example.
*
* Return: Always 0 (succes)
*/

void print_line(int n)
{
	int _nbr;

	if (n <= 0)
		_putchar('\n');

	if (n > 0)
	{
		for (_nbr = 0; _nbr < n; _nbr++)
			_putchar('_');
		putchar('\n');
	}
}
