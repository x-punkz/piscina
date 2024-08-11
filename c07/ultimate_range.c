/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:28:03 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 19:28:18 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*o mesmo que o range porem o range é um ponteiro para uma array*/

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (size);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	int	min = atoi(av[1]);
	int	max = atoi(av[2]);
	int	size;
	int 	*tab;
	int 	i = 0;

	size = ft_ultimate_range(&tab, min, max);
	printf("Size = %i\n", size);
	while (i < size)
	{
		printf("%i\n", tab[i]);
		i++;
	}
	return (0);
}
*/
