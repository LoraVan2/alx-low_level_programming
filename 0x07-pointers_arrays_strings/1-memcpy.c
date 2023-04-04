#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination to copy to
 * @src: the memory area to copy from
 * @n: the byte to copy 
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];

	return (dest);

}
