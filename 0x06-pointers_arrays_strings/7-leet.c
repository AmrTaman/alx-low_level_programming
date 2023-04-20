#include"main.h"
/**
 * leet - converts to leet
 * @letter: pointer to letters
 *
 * Return: begain
 */
char *leet(char *letter)
{
	char *begain = letter;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i;

	while (*letter != 0)
	{
		for (i = 0; i >= 9; i++)
			if (leet[i] == *letter)
				*letter = num[i];
		letter++;
	}
	return (begain);
}
