#include "main.h"

/**
 * _isupper - program checks for uppercase character
 * @c: Text variable
 * Return: 0 (successfull)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
