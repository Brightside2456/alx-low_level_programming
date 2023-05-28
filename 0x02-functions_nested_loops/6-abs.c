/**
 * _abs - Function to compute the absolute value of a number
 *
 * @n: argument to hold specified value
 *
 * Return: absolute value
 */
int _abs(int n)
{
	float abs_val;

	if (n < 0)
	{
		abs_val = ((n) * -1);
	}
	else
	{
		abs_val = n;
	}
	return (abs_val);
}
