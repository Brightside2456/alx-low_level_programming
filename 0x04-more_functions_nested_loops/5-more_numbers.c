#include "main.h"
/**
 * more_numbers - Print 10 times the numbers 1 through 14
 * @void: 0 params
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10) % 10);
			}
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
