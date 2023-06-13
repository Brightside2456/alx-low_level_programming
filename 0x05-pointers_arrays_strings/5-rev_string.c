/**
 * rev_string - Reverse a string
 * @s: string
 * Return: nothing
 */
void rev_string(char *s)
{
	/**
	 * Declaring the var to hold lenght of sting
	 * and an iterator to printthe individual characters
	 * in the string
	 */
	int lenght, i;
	char temp;

	/* Loop to count lenght of string*/
	for (lenght = 0; s[lenght] != '\0'; lenght++)
	{

	}
	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
	}
}
