#include <unistd.h>

void main()
{
	print_comb();
}

void	print_comb( void )
{
	int		values[3];
	char	result[3];

	values[0] = 0;
	while (values[0] <= 7)
	{
		values[1] = values[0] + 1;
		while (values[1] <= 8)
		{
			values[2] = values[1] + 1;
			while (values[2] <= 9)
			{
				result[0] = values[0] + '0';
				result[1] = values[1] + '0';
				result[2] = values[2] + '0';
				write(1, result, 3);
				if (values[0] + values[1] + values[2] != 9 + 8 + 7)
					write(1, ", ", 2);
				values[2]++;
			}
			values[1]++;
		}
		values[0]++;
	}
}
