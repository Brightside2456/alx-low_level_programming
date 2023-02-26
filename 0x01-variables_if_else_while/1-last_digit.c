#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int ans = n % 10;
	printf("Last digit of %d is %d ", n, ans);
	if (ans > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ans == 0)
	{
		printf("and is 0\n");
	}
	else if (ans < 6 && ans != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
