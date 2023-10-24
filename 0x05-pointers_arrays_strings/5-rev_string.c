#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: input string
 *
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int tally = 0;
	int a;

	while (s[tally] != '\0')
	tally++;

	for (a = 0; a < tally; a++)
	{
		tally--;
		rev = s[a];
		s[a] = s[tally];
		s[tally] = rev;
	}

}
