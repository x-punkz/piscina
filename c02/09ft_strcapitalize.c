char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
		if (i > 1 && (str[i - 1] >= ' ' && str[i - 1] < '0')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int arc, char **arv)
{
	if (arc == 2)
		printf("%s", ft_strcapitalize(arv[1]));
	return (0);
}
*/
