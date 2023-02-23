#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: 1(success)
 * On error, -1 is returned, and errno is set appropriatelu.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
