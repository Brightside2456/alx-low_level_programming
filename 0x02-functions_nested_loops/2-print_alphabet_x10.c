#include "main.h"
/**
 * print_alphabet_x10 - Function to print letters a-z 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
