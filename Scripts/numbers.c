using <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

void numbers()
{
	for (char c = '0', c <= '9', c++)
		putchar(c)
}

int main()
{
	numbers();
	return (0);
}
