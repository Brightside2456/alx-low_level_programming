#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments (argument count)
 * @argv: array of arguments (arguemnt vector)
 * Return: 0 on succes
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
