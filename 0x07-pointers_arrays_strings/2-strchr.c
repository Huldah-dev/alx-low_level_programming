#include "main.h"
/**
 * _strchr - copies n bytes from the memory area src to memory area dest
 *
 * @s: pointer to strig
 * @c: character
 *
 * Return: a pointer to the first occurence of character c in the string
 * or NULL if the character is not foud
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
