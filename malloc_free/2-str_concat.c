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
	unsigned int size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = totSize(s1, s2);

	t = malloc(sizeof(char) * size);

	if (t == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		t[i] = s2[j];
		j++;
		i++;
	}
	t[i] = '\0';
	return (t);
}

/**
* totSize - lenght of two chains s1 and s2
* @chaine1: pointer sur s1
* @chaine2: pointer sur s2
*
* Return: A pointer
*/

unsigned int totSize(char *chaine1, char *chaine2)
{
	unsigned int len_ch1 = 0;
	unsigned int len_ch2 = 0;

	while (chaine1[len_ch1] != '\0')
	{
		len_ch1++;
	}

	while (chaine2[len_ch2] != '\0')
	{
		len_ch2++;
	}
	return (len_ch1 + len_ch2 + 1);
}
