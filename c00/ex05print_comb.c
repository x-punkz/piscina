#include <unistd.h>
void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	
	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{	
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				write(1, &nb1, 1);
				write(1, &nb2, 1);
				write(1, &nb3, 1);
				nb3++;
				if (nb1 != '7')
					write(1, ", ", 2);
			}
			nb2++;
		}
		nb1++;
	}
	write(1, "\n", 1);

}

int	main(void)
{
	ft_print_comb();
}
