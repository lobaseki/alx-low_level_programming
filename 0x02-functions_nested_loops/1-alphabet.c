#include"main.h"

/**
 * print_alphabet - write the the lower-case alphabet followed by a new line
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
