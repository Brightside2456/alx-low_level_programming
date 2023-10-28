#include "main.h"

/**
 * is_palindrome - Function to check for palindrom in words
 * @s: word
 * Return: int
 */

char *word(char *s)
{	
	char *wrd;

	if (*s =="\0")
	{
		return ("\0");
	}
	*wrd = *s;
}
char *rev_word(char *s)
{
	char *rev_wrd;

	*rev_wrd = "";
	if (*s == "\0")
	{
		return ("\0");
	}
	*rev_wrd = *rev_wrd + *rev_word(s + 1);
}
int is_palindrome(char *s)
{
	if (word(*s) == rev_word(*s))
	{
		return (1);
	}
	return (0);
}
