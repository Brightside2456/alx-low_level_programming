#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - func to print name of argument 1
 * @name: char pointer
 * @f: char function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*func)(char *);

	func = f;
	func(name);

}

