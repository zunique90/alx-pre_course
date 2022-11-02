#include <stdio.h>
/**
 * main - Prints all the arguments followed by a new line
 * @ac: number of items in av
 * @av: a NULL terminated array of strings
 *
 * Return: (0) Success
 */

int main(int __attribute__((__unused__)) ac, char *av[])
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
	printf("%s\n", av[i]);
	}
	return (0);
}
