#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main function.
 * @s1: Primer string.
 * @s2: Second string.
 *
 * Description: Write a function that returns a pointer to
 * a newly allocated space in memory containing
 * a copy of the string given as a parameter.
 * Return: The pointer to str.
 */

char *str_concat(char *s1, char *s2)
{
	int size; /* string size*/
	int size2; /* Second string size */
	int i, j; /* loop iterators */
	char *array; /* Lauretta */

	if (!s1)
		s1 = ""; /* Returns an empty string */
	if (!s2)
		s2 = "";
	for (size = 0; s1[size] != '\0'; size++) /* length of string */
		;
	for (size2 = 0; s2[size2] != '\0'; size2++) /* string length */
		;
	array = malloc(((size) + (size2 + 1)) * sizeof(char)); /* New memory */

	if (!array)
	{
		return (NULL); /* Returns NULL if malloc fails */
	}
	for (i = 0; i < size; i++)
	{
		array[i] = s1[i]; /* String is copied using main string */
	}
	for (j = 0; j < (size2 + 1); j++)
	{
		array[i + j] = s2[j]; /* String is copied using main string */
	}
	return (array); /* New string is returned */
}
