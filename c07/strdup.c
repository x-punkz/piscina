/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:11:27 by eteofilo          #+#    #+#             */
/*   Updated: 2024/08/05 15:27:10 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*alocar memoria com malloc para uma array nao criada ainda*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	if (src == 0)
		return (0);
	while (src[i] != 0)
		i++;
	ret = malloc(sizeof(src));
	if (!ret)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\n';
	return (ret);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "May the force be with you.";
	char *s2 = ft_strdup(s1);
	printf("Strings = %s", s2);
}
*/
