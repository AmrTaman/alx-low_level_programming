#include<stdio.h>
/*
 * main - testing the error streaming message
 *
 * Return: one
 */
int main(void)
{
        char amr[] = "error section is here";

        fputs(amr, stderr);
        return (1);
}
