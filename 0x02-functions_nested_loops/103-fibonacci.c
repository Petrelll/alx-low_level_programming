#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	long int a, y = 1, z = 2, sum = 0, tsum = 0;

	for (a = 0; a < 49; a++)
	{
		if ((z % 2 == 0) && (z <= 4000000))
		{
			tsum = tsum + z;
		}
		sum = y + z;
		y = z;
		z = sum;
	}
	printf("%ld\n", tsum);
	return (0);
}
