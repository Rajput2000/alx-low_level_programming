#include "main.h"

/**
 *_abs - Check main
 * @r: An integer input
 * Description: This function returns absolute value of a number
 * Return: Absolute value of number r
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
