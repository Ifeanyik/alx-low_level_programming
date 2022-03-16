#include <unistd.h>

/**
 * times_table -Prints 9 times table
 */

void times_table(void)
{
	int i = 0, j = 0, count = 0, a = j;

	while (i <= 9)
	{
		while (count <= 9)
		{
			write(1, &a, 3);
			count += 1;
			a += j;
		}
		j++;
		i++;
		a = j;
	}
}
