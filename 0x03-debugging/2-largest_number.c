
 Product
Solutions
Open Source
Pricing
Search
Sign in
Sign up
BrightDaniel
/
alx-low_level_programming
Public
Code
Issues
7
Pull requests
1
Actions
Projects
Security
Insights
alx-low_level_programming/0x03-debugging/2-largest_number.c
 @BrightDaniel
BrightDaniel Create 2-largest_number.c
Latest commit 9bc91b2 Jul 6, 2022
 History
 1 contributor
29 lines (25 sloc)  354 Bytes

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
