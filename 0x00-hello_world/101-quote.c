/**
 * main - Entry point
 *
 * Return: 1 on success
 */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *some_text;

	some_text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, some_text, strlen(some_text));

	return (1);
}
