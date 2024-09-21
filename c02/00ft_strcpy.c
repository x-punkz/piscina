char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
//Posso fazer sem o j tbm.
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	dest[20];

	src = "substituir";
	printf("minha funçao: %s\n", ft_strcpy(dest, src));
	printf("funcao padrao: %s", strcpy(dest, src));
}
*/
