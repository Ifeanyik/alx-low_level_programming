/**
 * swap_int - function name
 * @a: parameter pointer type
 * @b: parameter pointer type
 * Description: swaps values of a and b
 */
void swap_int(int *a, int *b)
{
	int *c = a, *d = b;
	int e = *c, f = *d;
	*c = f;
	*d = e;
}
