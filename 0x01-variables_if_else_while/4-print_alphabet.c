#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		while (character != 'q' || character != 'e')
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
