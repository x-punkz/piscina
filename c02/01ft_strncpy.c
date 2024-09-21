char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src;
	char	dest[20];
	unsigned int	n;

	src = "adoleta";
	n = 6;
	printf("minha funçao: %s\n", ft_strncpy(dest, src, n));
	printf("funçao padrao: %s\n", strncpy(dest, src, n));
}
*/
