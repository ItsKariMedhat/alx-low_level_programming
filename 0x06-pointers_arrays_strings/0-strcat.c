#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the x
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
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
