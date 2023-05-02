#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatonates two strings
 * @s1: frst string
 * @s2: scnd string
 * @n: concatonated values number
 *
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f = 0, s = 0;
	char *ptr;

	while (s1[f])
	{
		f++;
	}
	while (s2[s])
	{
		s++;
	}
	if (n > s)
		n = s;
	ptr = malloc(sizeof(char) * (f + n + 1));
	if (ptr == 0)
		return (NULL);
	for (s = 0; s < f + n; s++)
	{
		if (s < f)
			ptr[s] = s1[s];
		else if (s >= f)
			ptr[s] = s2[s - f];
	}
	return (ptr);
}
