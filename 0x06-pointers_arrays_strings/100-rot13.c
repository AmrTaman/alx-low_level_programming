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
	char rot[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	int i;

	while (*letter != 0)
	{
		for (i = 0; i <= 51; i++)
		{
			if (*letter == rot[i])
			{
				*letter = rot[i + 26];
			}
		}
		letter++;
	}
	return (begain);
}

