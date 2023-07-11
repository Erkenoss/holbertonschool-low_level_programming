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
	unsigned int i;
	unsigned int j;
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

int totSize(char *chaine1, char *chaine2)
{
	unsigned int len_ch1 = 0;
	unsigned int len_ch2;

	while (chaine1[len_ch1] != '\0')
	{
		len_ch1++;
	}


	len_ch2 = len_ch1;

	while (chaine2[len_ch2] != '\0')
	{
		len_ch2++;
	}

	return (len_ch2 + 1);
}
