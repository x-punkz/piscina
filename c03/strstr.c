/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:04:15 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 12:45:50 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return ('\0');
}

#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac < 2)
		return (0);

	printf("mine = %s\n", ft_strstr(av[1], av[2]));
	printf("std = %s\n", strstr(av[1], av[2]));
	return(0);
}

