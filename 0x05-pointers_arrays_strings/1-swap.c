/**
 * swap_int - Swap the values of pointers
 * @a: first pointer to int
 * @b: second pointer to int
 */
void swap_int(int *a, int *b)
{
	int c, d;
	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
