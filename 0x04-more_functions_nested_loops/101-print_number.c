#include "main.h"

/**
 * print_number - A function that prints an integer
 *
 * @n: Integer printed
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if ((a / 10) > 0)
		print_number(a / 10);

	_putchar((a % 10) + '0');
}
