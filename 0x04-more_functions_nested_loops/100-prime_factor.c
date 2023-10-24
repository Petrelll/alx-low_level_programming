#include <stdio.h>

/**
 * main - A func that finds and prints the largest prime factor
 * of numbers 612852475143
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	long prime = 612852475143, factor;

	while (factor < (prime /  2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (factor = 3; factor < (prime / 2); factor += 2)
		{
			if ((prime % factor) == 0)
				prime /= factor;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
