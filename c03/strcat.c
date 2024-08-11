/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:12:01 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/04 13:01:31 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (dest[count] != 0)
	{
		count++;
	}
	while (src[i] != 0)
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	if(argc < 2)
		return (0);
	else
	{
		//printf("std= %s\n", strcat(argv[1], argv[2]));
		printf("mine= %s\n", ft_strcat(argv[1], argv[2]));
		return (0);
	}
}
*/
