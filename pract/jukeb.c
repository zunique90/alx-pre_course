#include <stdio.h>
#include <string.h>

/*A 2-D array holding sound tracks in a jukebox*/
char tracks[][80] = 
{
	{"I left my heart in Harvard Med School"},
	{"Newark, Newark - a wonderful town"},
	{"Dancing with a Dork"},
	{"From here to maternity"},
	{"The girl from Iwo Jima"}
};
/* a function that uses the strstr function to search for substrings in each track name in the 2-D array*/
void find_track(char search_for[])
{
	int i = 0;
	char *sub;

	printf("searching tracks.......\n");

	for (i = 0; i < 5; i++)
	{
		if (strstr(tracks[i], search_for))
			printf("found it!! Track %i: %s\n", i + 1, tracks[i]);
	}
}
/* main function asks user for substring */
int main()
{
	char search_for[80]; /* array to hold substring that user will input */

	printf("Search for: "); /* asks user to input substring */

	fgets(search_for, 80, stdin); /* gets input(substring eg "town") from user via stdin(keyboard) */

	search_for[strcspn(search_for, "\n")] = 0; /* Removes the newline character added to the user input by fgets function */

	find_track(search_for); /* calls the find_track function to get the track containing the substring */
	return (0);
}
