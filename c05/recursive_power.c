/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:56:18 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/31 19:15:28 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 1)
		nb = nb * ft_iterative_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char **arv)
{
	if (arc < 2)
		return (0);
	printf("%d", ft_iterative_power(atoi(arv[1]), atoi(arv[2])));
	return (0);
}
*/
