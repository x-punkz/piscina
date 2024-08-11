/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:45:09 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/21 21:04:18 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char print)
{
	char	*invalid;
	int		i;

	i = 0;
	invalid = "entrada invalida.";
	if (print == 'n')
	{
		while (invalid[i] != '\0')
		{
			write(1, &invalid[i], 1);
			i++;
		}
	}
	else
	{
		write(1, &print, 1);
	}
}
