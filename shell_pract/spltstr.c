#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * Description: program splits a string 
 * and returns an array of each word of the string
 *
 * Return: (0) Success
 */
int main(void)
{
	char str[] = "izu eze is fab!";

	char* token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s ", token);
		token = strtok(NULL, " ");
	}
	printf("\n");

	return (0);
}
