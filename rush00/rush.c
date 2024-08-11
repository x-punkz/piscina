/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:14:46 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/23 12:28:55 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char print);

void	columns(int print_x, char corner, char middle )
{
	int	print_col;

	print_col = 0;
	while (print_col < print_x)
	{
		if (print_col == 0 || print_col == print_x - 1)
			ft_putchar(corner);
		else
			ft_putchar(middle);
		print_col++;
	}
	print_col = 0;
}

void	rush(int x, int y)
{
	int	print_line;

	print_line = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('n');
	}
	else
	{
		while (print_line < y)
		{
			if (print_line == 0 || print_line == y - 1)
				columns(x, 'o', '-');
			else
				columns(x, '|', ' ');
			print_line++;
			ft_putchar('\n');
		}
	}
}
