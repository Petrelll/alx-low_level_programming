#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: input
 *
 * Return: half of input
 */

void puts_half(char *str)
{
	int a, length;

	length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	if (length % 2 == 0)
	{
		a = length / 2;
	}
	else
	{
		a = (length - 1) / 2;
	}
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
