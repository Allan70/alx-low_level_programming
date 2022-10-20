#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: Prints every minute of the day of Jack Bauer
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int h_tens;
	int h_ones;
	int m_tens;
	int m_ones;

	for (h_tens = '0'; h_tens <= '2'; h_tens++)
		for (h_ones = '0'; h_ones <= '9'; h_ones++)
			for (m_tens = '0'; m_tens < '6'; m_tens++)
				for (m_ones = '0'; m_ones <= '9'; m_ones++)
				{
					if (h_ones == '4' && h_tens == '2')
					{
						break;
					}
					else if(h_tens <= '2')
					{
						_putchar(h_tens);
						_putchar(h_ones);
						_putchar(':');
						_putchar(m_tens);
						_putchar(m_ones);
						_putchar('\n');
					}
					
				}
}
