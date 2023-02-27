#include "main.h"
#include <string.h>

/**
 * *_strcpy - is main func
 * @dest: is tghe var
 * @src: is the var
i * Return: success 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
