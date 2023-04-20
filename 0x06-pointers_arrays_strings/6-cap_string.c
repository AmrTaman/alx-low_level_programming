#include"main.h"
/**
 * cap_string - capitalizes the begaining of all words
 * @sentence: pointer for elments of the string
 *
 * Return: begain
 */
char *cap_string(char *sentence)
{
	char *begain = sentence;

	while (*sentence != 0)
	{
		if (*sentence >= 'a' && *sentence <= 'z')
		{
			sentence--;
			if (*sentence == ' ' || *sentence == '.'
					|| *sentence == '\n' || *sentence == '\t'
					|| *sentence == ',' || *sentence == ';' ||
					*sentence == '!' || *sentence == '?'
					|| *sentence == '\"' || *sentence == '('
					|| *sentence == ')' || *sentence == '{'
					|| *sentence == '}' || begain == sentence)
			{
				sentence++;
				*sentence -= 32;
			}
			sentence++;
		}
		sentence++;
	}
	return (begain);
}
