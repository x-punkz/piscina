/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:22:29 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/04 13:15:14 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nb_letter;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb_letter = (nb % 10) + '0';
		write (1, &nb_letter, 1);
	}
	else
	{
		nb_letter = (nb % 10) + '0';
		write (1, &nb_letter, 1);
	}
}
/*
#include <stdlib.h>

int main(int arc, char **arv)
{
	if (arc < 2)
		return (0);
	ft_putnbr(atoi(arv[1]));
	return (0);	
}
*/
