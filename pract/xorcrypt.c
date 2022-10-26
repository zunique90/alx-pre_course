
void encrypt(char *msg)
{
	char c;
	while (*msg)
	{
		*msg ^= 31;
		msg++;
	}
}
