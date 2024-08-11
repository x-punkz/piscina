/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:14:39 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/22 13:39:56 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int	div;
	int	mod;
	int 	*ptr_div;
	int	*ptr_mod;

	ptr_div = &div;
	ptr_mod = &mod;

	ft_div_mod(5, 2, ptr_div, ptr_mod);

	printf("Resultado da divisão: %d \n", div);
	printf("Resto da divisão: %d \n", mod);
	return(0);
}
*/
