using <unistd.h>

void putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	putchar('W');
	putchar('\n')
	putchar('L');
	return (0);
}
