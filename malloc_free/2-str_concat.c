#include "main.h"
#include <unistd.h>

/**
* str_concat - add two chain and use malloc for
* @s1: pointer
* @s2: pointer
*
* Return: A pointer
*/

char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned int size;
	
	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	size = totSize(s1, s2);
	
	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);
	return (t);
}

int totSize(char *chaine1, char *chaine2)
{
	unsigned int lench1 = 0;
	unsigned int lench2;

	while (chaine1[lench1] != '\0')
	{
		lench1++;
	}


	lench2 = lench1;

	while (chaine2[lench2] != '\0')
	{
		lench2++;
	}

	return (lench2 + 1);	
}
