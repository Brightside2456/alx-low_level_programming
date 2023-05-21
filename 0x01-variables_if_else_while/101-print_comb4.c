#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;
	int m;
	int o;
	/* your code goes there */
	for (n = '0'; n <= '9'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			for (o = '2'; o <= '9'; o++)
			{
				if (n == m && n == o)
				{

				}
				else
				{
					if ((o > n) && (m > n) && (o > m))
					{
						putchar(n);
						putchar(m);
						putchar(o);
					if ((n == '7') && (m == '8') && (o == '9'))
						{

						}
					else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

