#include <stdio.h>
#include <string.h>

char tracks[][80] = 
{
	{"I left my heart in Harvard Med School"},
	{"Newark, Newark - a wonderful town"},
	{"Dancing with a Dork"},
	{"From here to maternity"},
	{"The girl from Iwo Jima"}
};

void find_track(char search_for[])
{
	int i = 0;
	char *sub;

	printf("searching tracks\n");

	for (i = 0; i < 5; i++)
	{
		sub = strstr(*tracks, search_for);
		if (sub == NULL)
			printf("no match found\n");
		else
			printf("found it!! Track %i: %s\n", i, sub);
	}
}
int main()
{
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	find_track(search_for);
	return (0);
}
