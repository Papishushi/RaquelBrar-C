using <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void alphabet()
{
	for (char c = 'A', c <= 'Z', c++)
		putchar(c)
}

int main()
{
	alphabet();
	return (0);
}
