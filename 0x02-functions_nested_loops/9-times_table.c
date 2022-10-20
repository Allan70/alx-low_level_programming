#include "main.h"

/**
 * times_table - entry point
 * Description: Prints the times table starting with 0
 */
void times_table(void)
{
	int number;
	int counter;
	int inner_count;

	for (counter = 0; counter <= 9; counter++)
	{
		inner_count = 0;
		number = 0;

		while (inner_count <= 9)
		{
			number = counter;

			number = number * inner_count;

			if (number <= 9)
			{
				printf(" %i", number);
			}
			else if (number == 0 && inner_count == 0)
			{
				printf("%i", number);
			}	
			else
			{
				printf("%i",number);
			}

			if (inner_count != 9)
			{
				printf(",");
				printf(" ");
			}

			inner_count++;
		}
		printf("\n");
	}
}
