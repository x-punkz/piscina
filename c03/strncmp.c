/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:55:03 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 12:33:00 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n -1 && s1[i] == s2[i] && s1[i] != 0)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc < 4)
		return (0);
	printf("mine = %d\n",ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("std = %d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	return(0);
}
*/
