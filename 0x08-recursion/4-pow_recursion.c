#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 * Return: @x to the power of @y, if @y < 0 returns -1
 */
int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : !y ? 1 : x * _pow_recursion(x, --y));
}
