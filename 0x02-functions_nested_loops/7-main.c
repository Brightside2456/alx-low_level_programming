#include "main.h"

/**
 * main - Function antry point
 *
 * Return: 0 on suces
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' +  r);
	_putchar('\n');
	_putchar('\n');
	return (0);
}
