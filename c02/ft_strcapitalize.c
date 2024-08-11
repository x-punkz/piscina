/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteofilo <eteofilo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:57:00 by eteofilo          #+#    #+#             */
/*   Updated: 2024/07/31 14:59:15 by eteofilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	str_mod(int n, char letter)
{
	if (n == 0 && letter >= 97 && letter <= 122)
		letter -= 32;
	else if (n == 1 && letter >= 65 && letter <= 90)
		letter += 32;
	return (letter);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = str_mod(0, str[i]);
		else if (
			(str[i - 1] >= 32 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i - 1] >= 91 && str[i - 1] <= 96)
			|| (str[i - 1] >= 123 && str[i - 1] <= 126)
		)
		{
			str[i] = str_mod(0, str[i]);
		}
		else
		{
			str[i] = str_mod(1, str[i]);
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
	char	str[40] = "HELLO-worlD  hY.";
	printf("%s", ft_strcapitalize(str));
}

