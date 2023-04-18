#include "main.h"
/**
 * reverse_array - a function that takes a pointer to an int as parameter and
 * @a: the tab integer
 * @n: the number
 */
void reverse_array(int *a, int n)
{
	int repeat;
	int temp;
	int x = 0;

	repeat = n/2;
	n--;
	for (; n >= repeat; n--)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		x++;
	}
}
