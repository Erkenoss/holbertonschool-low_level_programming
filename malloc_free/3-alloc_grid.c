#include "main.h"

/**
* alloc_grid - add two chain and use malloc for
* @width: the width
* @height: the height
*
* Return: A pointer
*/

int **alloc_grid(int width, int height)
{
	int **t, col, row;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

	for (col = 0; col < height; col++)
	{
		t[col] = malloc(sizeof(int) * width);
		if (t[col] == NULL)
		{
			free(t);
			for (row = 0; row <= col; row++)
				free(t[row]);
			return (NULL);
		}
	}

	for (col = 0; col < height; col++)
	{
		for (row = 0; row < width; row++)
			t[col][row] = 0;
	}
	return (t);
}
