#include "main.h"
/**
 * _memcpy - copies n bytes from the memory area src to memory area dest
 *
 * @src: pointer to memory area
 * @dest: memory area destination
 * @n: number of byte(s) to be filled
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned it i;

	for (i = 0; i < n; i++)
	{
		*(dest + 1) = *(src + 1);
	}
	return (dest);
}
