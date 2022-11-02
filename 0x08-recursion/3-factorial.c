#include "main.h"
/**
 * factorial - calculates the factorial of the specified number
 * @n: specified number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
