#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0
 */
int main (void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putcher(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
