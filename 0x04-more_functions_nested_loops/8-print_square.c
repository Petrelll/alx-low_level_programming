#include "main.h"

/**
 * print_square - A function that prints a square
 *
 * @size: the size of the square
 *
 * Description: can only use _putchar func to print, use # to print the square
 *
 * Return 0 (Successful)
 */

void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)
		_putchar('\n');

	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
