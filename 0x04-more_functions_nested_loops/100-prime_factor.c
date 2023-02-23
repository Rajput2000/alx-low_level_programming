/**
 * C program to find all prime factors of a given number
 */

#include <stdio.h>

int main()
{
    int i, j, num, isPrime, max;
    
    max = 0;
    num = 612852475143;

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                if (i > max)
                {
                    max = i;
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}
