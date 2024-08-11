/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:29:40 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/01 18:03:59 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0 && nb != i)
			return (0);
		if (nb % i == 0 && nb == i)
			return (1);
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (i >= 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char **arv)
{
	if (arc != 2)
		return (0);
	printf("%d", ft_find_next_prime(atoi(arv[1])));
}
*/
