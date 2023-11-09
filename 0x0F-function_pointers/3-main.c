#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vectio;
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[argc - 2];
	if (strcmp(operator, "+") != 0 || strcmp(operator, "-") != 0 ||
	strcmp(operator, "*") != 0 || strcmp(operator, "/") != 0 ||
	strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}
	else
		printf("You can continue\n");
	return (0);
}
