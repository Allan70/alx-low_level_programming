#include "main.h"

/**
 * main - prints arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if error and 0 if true
 */
int main(int argc, char *argv[])
{
	int i = 1;

	if (argc < 2)
	{
		return (1);
	}

	while (i  < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
