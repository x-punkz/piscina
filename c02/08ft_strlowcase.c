char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int arc, char **arv)
{
	if (arc == 2)
		printf("%s", ft_strlowcase(arv[1]));
	return (0);
}
*/
