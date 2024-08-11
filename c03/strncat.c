/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:12:01 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/04 13:21:12 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (dest[count] != 0)
	{
		count++;
	}
	while (i < nb && src[i] != 0)
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if(argc < 2)
		return (0);
	else
	{
	//	printf("std= %s\n", strncat(argv[1], argv[2], atoi(argv[3])));
		printf("mine= %s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
		return (0);
	}
}
*/
