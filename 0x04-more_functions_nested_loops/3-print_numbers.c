#include "main.h"
/**
 * print_numbers - Funtion to print numbers for 0 to 9
 * @void: no params
 * Return: Void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
