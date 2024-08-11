/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:22:29 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 18:34:50 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb, char *base, int size)
{
	int	nb_letter;

	if (nb < 0)
	{
		nb = nb * -1;
	}
	if (nb >= size)
	{
		ft_putnbr(nb / size, base, size);
		nb_letter = nb % size;
		write (1, &base[nb_letter], 1);
	}
	else
	{
		nb_letter = nb % size;
		write (1, &base[nb_letter], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;
	int	ret;

	i = 0;
	ret = 1;
	while (base[i] != 0)
	{
		if (base[i] == '-' || base[i] == '+')
			ret = 0;
		j = 0;
		while (base[j] != 0)
		{
			if (i != j && base[i] == base[j])
				ret = 0;
			j++;
		}
		i++;
	}
	if (i <= 1)
		ret = 0;
	if (ret == 1)
		ft_putnbr(nbr, base, i);
}
/*
#include <stdlib.h>

int main(int arc, char **arv)
{
	if (arc < 2)
		return (0);
	ft_putnbr_base(atoi(arv[1]), arv[2]);
	return (0);	
}
*/
