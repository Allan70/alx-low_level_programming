#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return - return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n  < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
