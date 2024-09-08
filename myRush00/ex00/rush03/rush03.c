void	ft_putchar(char c);

void	loops(int larg, int alt, int x, int y)
{
	while (alt > 0 && alt < (y - 1) && larg <= (x - 1))
	{
		if (larg == 0 || larg == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		larg++;
	}
	while ((alt == 0 && larg <= (x - 1))
		|| (alt == (y - 1) && larg <= (x - 1)))
	{
		if ((larg == 0 && alt == 0) || (larg == 0 && alt == (y - 1)))
			ft_putchar('A');
		else if ((alt == 0 && larg == (x - 1))
			|| (alt == (y - 1) && larg == (x - 1)))
			ft_putchar('C');
		else
			ft_putchar('B');
		larg++;
	}
}

void	rush(int x, int y)
{
	int	larg;
	int	alt;

	larg = 0;
	alt = 0;
	while (larg < x && alt < y)
	{
		loops(larg, alt, x, y);
		ft_putchar('\n');
		alt++;
		larg = 0;
	}
}
