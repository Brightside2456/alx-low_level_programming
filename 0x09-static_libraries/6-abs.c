/**
<<<<<<< HEAD
 * _abs - Function to compute the absolute value of a number
 *
 * @n: argument to hold specified value
 *
 * Return: absolute value
 */
int _abs(int c)
{
	int abs_val;

	if (c < 0)
	{
		abs_val = -1 * c;
	}
	else if (c == 0)
	{
		abs_val = 0;
	}
	else
	{
		abs_val = c;
	}
	return (abs_val);
}
