/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:53:56 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/01 17:33:44 by eteofilo         ###   ########.fr       */
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
	return (ret);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char **arv)
{
	if (arc != 2)
		return (0);
	printf("%d", ft_is_prime(atoi(arv[1])));
}
*/
