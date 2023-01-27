using <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void inverse_alphabet()
{
	for (char c = 'Z', c >= 'A', c--)
		putchar(c)
}

int main()
{
	inverse_alphabet();
	return (0);
}
