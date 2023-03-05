#include "main.h"

/**
 * print_times_table - func to do that
 *
 * @n: no parameters
 *
 * Return: void
 */

void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{

	}
	else
	{
		int i;
		int j;
		int product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * n;

				if (product >= 10)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (i != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
				if (i != n)
				{
					_putchar(',');
				}
			}
		}
	}
}
