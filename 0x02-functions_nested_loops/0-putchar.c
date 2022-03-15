#include <main.h>
/**
 * main -Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ab[] = "_putchar";
	int c;
	for (c =0; c < 8; c++)
	{
		_putchar(ab[c]);
	}
	_putchar('\n');
	return (0);
}
