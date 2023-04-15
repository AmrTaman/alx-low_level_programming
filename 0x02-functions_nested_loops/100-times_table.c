#include"main.h"
/**
 * print_times_table - printing times table till 15
 * @n: describes the end of tables
 */
void print_times_table(int n)
{
	if (n <= 15)
	{
		int m;
		int x;
		int times;

		for (m = 0; m <= n; m++)
		{
			_putchar('0');
			for (x = 1; x <= n; x++)
			{
				times = m * x;
				_putchar(',');
				_putchar(' ');
				if (times / 100 >= 1)
				{
					_putchar('0' + times / 100);
					_putchar('0' + times / 10 % 10);
				}
				else
				{
					_putchar(' ');
					if (times / 10 >= 1 && times < 100)
						_putchar('0' + times / 10);
					else
					{
						_putchar(' ');
					}
				}
				_putchar('0' + times % 10);
			}
			_putchar('\n');
		}
	}
}
