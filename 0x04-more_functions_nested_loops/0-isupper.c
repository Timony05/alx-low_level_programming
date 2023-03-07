#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if a character is a digit
 *@c: character to check
 * Return: 0 or 1
*/

int _isdigit(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
