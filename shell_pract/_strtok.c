#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* _strtok(char *str, char delim)
{
	int i = 0;
	char* token;

	if (str == NULL)
		return (NULL);

	token = malloc(strlen(str));
	if (token == NULL)
		return (NULL);

	while(str)
	{	
		if (str[i] == delim)
			token[i] = '\n';
		
		else
			token[i] = str[i];
		i++;
	}
	return (token);
}
int main(void)
{
	/* int i = 0; */
	char str[] = "izu eze is fab";
	char* read;

	read = _strtok(str, ' ');
	while (read != NULL)
	{
		printf("%s", read);
		/*read = _strtok(NULL, ' ');*/
	}
	printf("\n");

	return (0);
}
