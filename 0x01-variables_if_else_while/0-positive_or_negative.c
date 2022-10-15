#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else if (n  < 0)
	{
		printf("-98 is negative\n");
	}
	else
	{
		printf("0 is zero\n");
	}
	return (0);
}
