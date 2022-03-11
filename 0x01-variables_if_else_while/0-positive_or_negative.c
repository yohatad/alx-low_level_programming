#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * This code will genrate three outputs 
 * depending on the random number generated
 * 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
        printf("%i is positive\n",n);
    else if (n <0)
	    printf("%i is negative\n",n);
    else 
        printf("%i is zero\n",n);
    
    return (0);
}
