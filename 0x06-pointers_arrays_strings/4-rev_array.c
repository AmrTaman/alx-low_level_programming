#include"main.h"
#include<stdio.h>
/**
 * reverse_array - a function that takes a pointer to an int as parameter and
 * @a: the tab integer
 * @n: the number
 */
void reverse_array(int *a, int n)
{
	printf("%d", *(a + (n - 1)));
	for (n = n - 2; n >= 0; n--)
	{
	printf(", %d", *(a + n));
	}
	printf("\n");
}
