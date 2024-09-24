// # include <unistd.h>

void    ft_print_comb2(void)
{
	char i;
    char j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			char output[7] = {i / 10 + '0', i % 10 + '0', ' ', j / 10 + '0', j % 10 + '0', ',', ' '};
			if (i == 98 && j == 99)
				write(1, output, 5);  // Solo 5 caratteri: '98 99'
			else
				write(1, output, 7);  // Stampiamo tutti e 7 i caratteri: '00 01, '		
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}