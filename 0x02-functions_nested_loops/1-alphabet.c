#include "main.h"
/**
 * print_alphabet - funtion to print the alphabets
 */
void print_alphabet(void)
{
	int i;

	i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
