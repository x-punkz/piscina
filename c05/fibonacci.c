/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:20:48 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 15:54:44 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	n = ft_fibonacci(index - 1) + ft_fibonacci(index + 1); //recursao pacarai
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int arc, char **arv)
{
	if (arc < 2)
		return (0);
	printf("%d", ft_fibonacci(atoi(arv[1])));
}
*/
