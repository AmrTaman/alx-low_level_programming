#include"function_pointers.h"
#include<stddef.h>
/**
 * array_iterator - iterates an array
 * @array: array pointer
 * @size: length of the array
 * @action: printing function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (; size > 0; size--)
	{
		action(*(array++));
	}
}
