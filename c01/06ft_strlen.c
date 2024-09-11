int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string;

	string = "paralelepipedo";
	printf("A palavra contém %d caracteres.", ft_strlen(string));
}
*/
