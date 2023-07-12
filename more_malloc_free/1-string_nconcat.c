#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - return t after concat s1 and s2 bytes n
*
* @s1: first string
* @s2: second string
* @n: an unsigned int
* Return: t
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = totSize(s1, s2, n);

	t = malloc(sizeof(char) * size);
		if (t == NULL)
			return (NULL);

	while (s1[i] != '\0')
	{
		t[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}


/**
* totSize - lenght of two chains s1 and s2
* @chaine1: pointer sur s1
* @chaine2: pointer sur s2
* @b: nbr bytes need in t
*
* Return: A pointer
*/

unsigned int totSize(char *chaine1, char *chaine2, unsigned int b)
{
	unsigned int len_ch1 = 0;
	unsigned int len_ch2 = 0;

	while (chaine1[len_ch1] != '\0')
		len_ch1++;

	while (chaine2[len_ch2] != '\0')
		len_ch2++;

	if (len_ch2 > b)
	{
		return (len_ch1 + b);
	}
	return (len_ch1 + len_ch2 + 1);
}
