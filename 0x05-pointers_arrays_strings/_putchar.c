#include <unistd.h>
/**
 * _putchar - prints a char to stdout
 *
 * Return: nothing
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
