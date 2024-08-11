/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:55:35 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/24 11:40:59 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main (void)
{
	int	tab[] = {18, 13, 3, 64, 5};
	int	size;
	int	i;

	size = 6;
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
