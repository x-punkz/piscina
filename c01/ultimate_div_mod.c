/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:14:39 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/24 10:34:58 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptr_a;
	int	*ptr_b;

	a = 5;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("Resultado da divisão: %d \n", *ptr_a);
	printf("Resto da divisão: %d \n", *ptr_b);
	return (0);
}*/
