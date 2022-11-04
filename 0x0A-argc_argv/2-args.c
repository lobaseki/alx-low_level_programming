#include <stdio.h>
/**
 * main - a program that prints all argumentsss it receives
 * @argc: argumentss count
 * @argv: array of pointers to argumentss strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
