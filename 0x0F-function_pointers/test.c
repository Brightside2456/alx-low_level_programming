#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vectio;
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	printf("argc: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%i]: %s\n", i, argv[i]);
	}
}
