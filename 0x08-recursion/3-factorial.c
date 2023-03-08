#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: 1 if @n is zero, -1 if @n less than zero
 * otherwise returns factorial of @n
 */
int factorial(int n)
{
	return (!n ? 1 : n < 0 ? -1 : n * factorial(n - 1));
}
