#include "main.h"

/**
 * _strcpy - copies a string pointed to the @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: a buffer to copy the string to
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}	
