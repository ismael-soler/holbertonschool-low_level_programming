#include "main.h"

/**
 * jack_bauer - clock
 *
 * Return: 0
 */

void jack_bauer(void)
{
	char hd, hu, md, mu;

	for (hd = '0'; hd <= '2'; hd++)
	{
		for (hu = '0'; hu <= '3'; hu++)
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
	}
	_putchar('\n');
}
