/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:56:54 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 15:57:23 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result < nb)
	{
		if (result * result == nb)
			return (result);
		result++;
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
	printf("%d", ft_sqrt(atoi(arv[1])));
	return (0);
}
*/
