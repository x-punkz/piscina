/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:55:35 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/24 12:12:58 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 1;
	while (i < size)
	{
		x = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > x)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = x;
		i++;
	}
}
/*
int	main (void)
{
	int	tab[] = {18, 13, 3, 64, 5};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
