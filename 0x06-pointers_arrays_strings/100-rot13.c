#include"main.h"
#include<stdio.h>
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
	char sol[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
	int i;

	while (*letter != 0)
	{
		for (i = 0; i <= 51; i++)
		{
			if (*letter == rot[i])
			{
				*letter = sol[i];
				break;
			}
		}
		letter++;
	}
	return (begain);
}
