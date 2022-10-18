#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - count the natural numbers from n to 98.
 * separate with a comma, followed by space and number should be printed accordingly
 *
 * @n: input
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}
