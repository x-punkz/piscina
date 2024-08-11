/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:25:09 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 18:34:09 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (
		str[i] == 32 || str[i] == 9 || str[i] == 10
		|| str[i] == 11 || str[i] == 12 || str[i] == 13
	)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>

int	main(int arc, char **arv)
{
	if (arc < 2)
		return (0);
	printf("%d", ft_atoi(arv[1]));
	return (0);
}
*/
