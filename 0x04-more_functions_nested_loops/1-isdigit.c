/**
 * _isdigit- Function to check for a digit
 *
 * @c: Value to be checked
 * Return: i for digit, 0 otherwise
 */
int _isdigit(int c)
{
	int num;
	int rVal = 0;

	for (num = '0'; num <= '9'; num++)
	{
		if (c == num)
		{
			rVal = 1;
		}
	}

	return (rVal);
}
