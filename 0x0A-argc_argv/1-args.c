#include <stdio.h>
/**
 * main - prints the number of argumentsss passed to it
 * @argc: argument counttt
 * @argv: array of pointer to argumentt strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* to suppress unused variable warning */
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
