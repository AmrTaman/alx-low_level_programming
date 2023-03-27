#include<stdio.h>
/*
  * main - testing the error streaming message
  *
  * Return: one
  */
int main(void)
{
        char amr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        
        fputs(amr, stderr);
        return (1);
}
