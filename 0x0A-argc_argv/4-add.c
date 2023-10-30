#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument  Vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int product;
	int num;

	if (argc > 1)
	{
		product = 1;
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num != 0)
			{
				num = atoi(argv[i]);
				product = product + num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", product);
	return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
