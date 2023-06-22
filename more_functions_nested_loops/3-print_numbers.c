#include "main.h"

/**
* print_numbers - Description pour main
* Whose idea was it to create Betty? Next on the third exercise.
* You have a good story to tell. So, why Betty is useless?
* Maybe because there is nothing to learn with her?
* Oh! Yes, you are right, for take the good habit!
*
* Return: Always 0 (succes)
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
