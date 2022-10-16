#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Description: Prints all sigle digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for ( number = '0'; number <= '9'; number++)
	{
		if (number != '9')
		{
			putchar(number + ", ");
		}
		else 
		{
			putchar(number + "$");
		}
	}
	putchar('\n');
	return (0);
}
