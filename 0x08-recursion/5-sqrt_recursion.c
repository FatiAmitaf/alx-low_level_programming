#include "main.h"

/**
 * square - This is my square
 *                     function about the square root
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 *
 * Return: This is the result
 */
int square(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (square(a, b + 1));
}

/**
 * _sqrt_recursion - This is my first function
 * @n: This is my value
 *
 * Return: This is my result of the function square
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (square(n, 0));
}
