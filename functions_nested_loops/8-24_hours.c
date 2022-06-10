#include "main.h"

/**
 * jack_bauer - clock
 *
 * Return: 0
 */

void jack_bauer(void)
{
	char hd, hu, md, mu;
	int max_hu = '9';
	int counter = '0';

	for (hd = '0'; hd <= '2'; hd++)
	{
		for (hu = '0'; hu <= max_hu; hu++)
		{
			for (md = '0'; md <= '5'; md++)
			{
				for (mu = '0'; mu <= '9'; mu++)
				{
					_putchar(hd);
					_putchar(hu);
					_putchar(58);
					_putchar(md);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
		counter++;
		if (counter == '2')
		{
		max_hu = '3';
		}
	}
}
