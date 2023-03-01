#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	/* move dest pointer to the end of the string */
	for (; *dest; dest++)
		{}
	/* copy from src to dest */
	for (; *src; src++, dest++)
		*dest = *src;
	/* set null char at the new end */
	*dest = 0;
	return (p);
}
