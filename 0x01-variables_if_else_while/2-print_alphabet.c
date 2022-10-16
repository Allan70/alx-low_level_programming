#include <stdio.h>

int main(void)
{
	char arr[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','l','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i = 0;

	while(i < sizeof(arr))
	{
		putchar(arr[i]);
		i++;
	}
	return (0);
}
