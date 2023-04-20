#include"main.h"
/**
 * rot13 - convert to rot
 * @letter: index
 *
 * Return: begain
 */
char *rot13(char *letter)
{
	char *begain = letter;
	char rot[] = "ABCDEFGHIJKLMabcdefghijklm";
	char rot2[] = "NOPQRSTUVWXYZnopqrstuvwxyz";
	int i;

	while (*letter != 0)
	{
		for (i = 0; i <= 25; i++)
		{
			if (rot[i] == *letter)
				*letter = rot2[i];
			else if (*letter == rot2[i])
				*letter = rot[i];
		}
		letter++;
	}
	return (begain);
}

