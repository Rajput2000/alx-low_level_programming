#include "main.h"

/**
 * leet -  a function that encodes a string
 * @a: is a pointer array
 * Return: 0 if is suceess
 */

char *leet(char *a)
{
	int i, j;
	char k[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; k[j] != '\0' ; j++)
		{
			if (a[i] == k[j])
			{
				a[i] = n[j];
			}
		}
	}
	return (a);
}
