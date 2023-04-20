#include"main.h"
/**
 * string_toupper - turn lowercase to upercase
 * @amr: pointer for a char array
 *
 * Return: sui
 */
char *string_toupper(char *amr)
{
	char *sui = amr;

	while (*amr != 0)
	{
		if (*amr >= 'a' && *amr <= 'z')
		{
			*amr = *amr - 32;
		}
		amr++;
	}
	return (sui);
}
