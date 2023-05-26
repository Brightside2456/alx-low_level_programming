/**
 * _abs - Funtion to compute abs valu
 *
 * @c: Specified number
 *
 * Return: The absolute valu
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
