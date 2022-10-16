#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

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
	char newString[50];

	if (n > 5)
	{
		newString = " and is greater than 5 ";
	}
	else if (n == 0)
	{
		newString = " and is 0 ";
	}
	else if (n < 6 && n != 0)
	{
		newString = " and is less than 6 and not 0 ";
	}
	printf("Last digit of %d is %c", n newString);
	return (0);
}
