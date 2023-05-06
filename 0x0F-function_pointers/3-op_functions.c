#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - adds two integers
 * @a: frst integer
 * @b: scnd integer
 *
 * Return: intger
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two integers
 *@a: frst integer
 *@b: scnd integer
 *
 * Return: intger
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply two integers
 *@a: frst integer
 *@b: scnd integer
 *
 * Return: intger
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers
 * @a: frst integer
 * @b: scnd integer
 *
 * Return: intger
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds modulus of two integers
 * @a: frst integer
 * @b: scnd integer
 *
 * Return: intger
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
