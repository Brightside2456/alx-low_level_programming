/**
 * _isalpha - Function to check for alphabets
 *
 * @c: Argument to be checked
 *
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	int retVal;

	if (c >= 'A' && c <= 'z')
		retVal = 1;
	else
		retVal = 0;

	return (retVal);
}
