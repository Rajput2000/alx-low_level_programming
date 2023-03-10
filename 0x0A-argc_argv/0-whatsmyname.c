#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
