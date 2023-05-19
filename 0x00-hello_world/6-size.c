#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("Size of a char: %ld byte(s)", sizeof(a));
	printf("Size of a int: %ld byte(s)", sizeof(b));
	printf("Size of a long int: %ld byte(s)", sizeof(c));
	printf("Size of a long long: %ld byte(s)", sizeof(d));
	printf("Size of a float: %ld byte(s)", sizeof(e));

	return (0);
}
