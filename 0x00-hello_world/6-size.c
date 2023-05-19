#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 'a';
	int b = 1;

	printf("Size of a char: %ld byte(s)", sizeof(a));
	printf("Size of a int: %ld byte(s)", sizeof(b));
	printf("Size of a long int: %ld byte(s)", sizeof(long unsigned int));
	printf("Size of a long long: %ld byte(s)", sizeof(long unsigned int));
	printf("Size of a float: %ld byte(s)", sizeof(long unsigned int));

	return (0);
}
