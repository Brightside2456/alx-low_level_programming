#include "main.h"
/**
 * print_times_table - print times table up to n
 *
 * @n: parameter
 *
 * Return:Void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int num1;
		int num2;

		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				int product = num1 * num2;
				if (num2 == 0)
				{
					_putchar('0' + product);
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product/10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + (product / 10) % 10);
					_putchar('0' + (product % 10));
				}
				if (num2 == n)
				{
					_putchar('\n');
		
				}
			}
		}
	}
}
