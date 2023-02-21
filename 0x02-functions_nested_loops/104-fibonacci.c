#include <stdio.h>

/**
 * main - a program that finds and prints the first 98 Fibonacci numbers
 *
 * RETURN: 0(success)
 */

int main(void)
{       
	int count;
	unsigned long fib1 = 0, fib2 = 1,sum;
        
        for (count = 0; count<98; count++)
        {       
                sum = fib1 + fib2;
                printf("%lu, " ,sum);
                fib1 = fib2;
                fib2 = sum;
        }       
        printf("\n");
        return (0);
}
