/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:33:05 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 19:24:03 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*criar uma array de range de int,com min ate max ,mas sem print o max. e alocar memoria para ela msm antes dela ser criada*/

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		arr = NULL;
	size = max - min;
	arr = malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(int arc, char **arv)
{
	int	nb1 = atoi(arv[1]);
	int	nb2 = atoi(arv[2]);
	int	*arr = ft_range(nb1, nb2);
	int	size = nb2 - nb1;
	int	i = 0;

	if (arc > 3)
		return (0);
	while (i < size)
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}
*/
