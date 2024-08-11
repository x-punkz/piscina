/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:39:13 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/31 11:02:43 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57) //based in ascii tab
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(int arc, char **arv)
{
	if (arc != 2)
		return (0);
	printf("%d", ft_str_is_numeric(arv[1]));
	return (0);
}
*/
