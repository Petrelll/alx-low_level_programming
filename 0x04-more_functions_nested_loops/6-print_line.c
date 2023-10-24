#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 *
 * @n: the no of times the char _ should be printed
 * Return: 0 (Successful)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
