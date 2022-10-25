#include "main.h"

/**
 * _isdigit - check for lowercase character.
 * @c: caracter recibo por main.
 * Return: 1 if alphabet c is uppercase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
