#include "main.h"

/**
 * print_chessboard - check the code
 * @a: a char pointer
 *
 * Return: s, the pointer
 */

void print_chessboard(char (*a)[8])
{
	int col;
	int row;

	for (col = 0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
			_putchar(a[col][row]);
		
		_putchar('\n');
	}
	
}
