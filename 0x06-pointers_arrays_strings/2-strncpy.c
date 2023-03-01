#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: is a pointer
 * @src: is a pointer
 * @n: is the variable
 * Return: 0 if is success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
