/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;
	int m;

	/* your code goes there */
	for (n = '0'; n <= '9'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			if (m == n)
			{

			}
			else
			{
				if (m > n)
				{
					/*
						int o = n + m;
						int p = m + n;
						printf("n: %d\nm: %d\n\n", o, p);
					*/
					putchar(n);
					putchar(m);
					if (n >= '8' &&  m >= '9')
					{
						continue;

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
	putchar(10);

	return (0);
}
