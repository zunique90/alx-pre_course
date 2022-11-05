#include <stdio.h>

char* _strtok(char *str, const char* delim)
{
	int i = 0;
	char* token;
	while(*str)
	{	
		if (str[i] == delim)
			break;
		else
			token[i] = str[i];
		i++;
	}
	return (token);
}
int main(void)
{
	char str[] = "izu eze is fab";
	char* read = _strtok(str, " ");

	while (read !=  NULL)
	{
		printf("%s ", read);
