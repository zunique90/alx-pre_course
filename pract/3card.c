#include <stdio.h>

int main()
{
	char card[] = "JQK";
	char a_card = card[2];

	card[2] = card[1];
	card[1] = card[0];
	card[0] = card[2];
	card[2] = card[1];
	card[1] = card[0];
	card[0] = card[2];
	card[2] = a_card;
	puts (card);

	return 0;
}
