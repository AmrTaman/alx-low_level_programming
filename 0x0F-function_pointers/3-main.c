#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - tests the program
 * @argc: size of argv
 * @argv: array of strings
 *
 * Returns: 0
 */
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL || argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	calc = op(num1, num2);
	printf("%d\n", calc);
	return (0);
}
