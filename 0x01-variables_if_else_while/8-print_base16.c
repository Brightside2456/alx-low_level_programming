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
	char n;

	/* your code goes there */
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar(10);

	return (0);
}
