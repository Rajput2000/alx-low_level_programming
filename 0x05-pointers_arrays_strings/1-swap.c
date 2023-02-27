#include "main.h"

/**
 * swap_int - is the function
 * @a: is the variable
 * @b: is the variable
 * Return: return 0 if success
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
