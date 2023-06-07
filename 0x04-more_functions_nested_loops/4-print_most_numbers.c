#include "main.h"
/**
 * print_most_numbers - Funtion to print numbers except 2 and 4
 * @void: no params
 * Return: Void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{

		}
		else
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
