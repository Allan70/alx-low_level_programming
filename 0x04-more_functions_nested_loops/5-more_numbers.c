#include "main.h"

/**
 * more_numbers - entry point
 * Description: prints 10 times the numbers
 */
void more_numbers(void)
{
	int number;
	int count;
	char count1;
	char count2;

	for (number = 0; number <= 9; number++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count <= 9)
			{
				count2 = (char)count;
			}
			else
			{
				count1 = (char)1;
				count2 = (char)count % 10;
				_putchar(count1 + '0');
			}

			_putchar(count2 + '0');
		}
		_putchar('\n');
		count = (char)0;
	}
}
