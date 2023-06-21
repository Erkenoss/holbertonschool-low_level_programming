#include "main.h"

/**
* jack_bauer- show to 00.00 to 23.59 hours
*
* Return: Always 0.
*/

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i <= 10; i++)
	{
	if (i == 10)
	{
		i = 0;
		j++;
	}
	if (j == 6)
	{
		i = 0;
		j = 0;
		k++;
	}
	if (k == 10)
	{
		i = 0;
		j = 0;
		k = 0;
		l++;
	}
	if (l == 2 && k == 3 && j == 5 && i == 9)
	{
	_putchar(l + '0'), _putchar(k + '0'), _putchar(':');
	_putchar(j + '0'), _putchar(i + '0'), _putchar('\n');

		break;
	}
	_putchar(l + '0'), _putchar(k + '0'), _putchar(':');
	_putchar(j + '0'), _putchar(i + '0'), _putchar('\n');
	}
}
