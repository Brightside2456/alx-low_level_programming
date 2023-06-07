/**
 * _isupper - Function to check for uppercase char
 * @c: value t be checked
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	int letter;
	int rVal;

	rVal = 0;
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			rVal = 1;
		}
	}

	return (rVal);
}
