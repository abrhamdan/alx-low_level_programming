#include "main.h"
/**
 * jack_bauer - prints time
 *
 * Description: prints a list of time
 * Return: Always .
 */
void jack_bauer(void)
{
	int i, j;
	for (i= 0; i < 24; i++)
	{
		_putchar(i / 10 + 48);
		_putchar(i % 10 + 48);
		_putchar(':');
		_putchar(j / 10 + 48);
		_putchar(j % 10 + 48);
		_putchar('\n');
	}
}
}
		
