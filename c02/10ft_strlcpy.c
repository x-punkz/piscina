unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "myscelania hayabusa";
	char	dest[] = "anything";
	int	size;

	size = 100;
	printf("%s\n", dest);
	ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	return (0);
}
*/
//para usar #include <bsd/string.h>
//descricao
//As funções strlcpy ()copia strings. strlcpy () pega o tamanho total do buffer (não apenas o comprimento) e garantem que o resultado seja terminado em NUL (desde que size seja maior que 0. Observe que um byte para o NUL deve ser incluído em size. Observe também que strlcpy ()opera somente em strings ''C'' verdadeiras. Isso significa que para strlcpy () src deve ser terminado em NUL
//A função strlcpy () copia até o tamanho - 1 caractere da string src terminada em NUL para dst , terminando o resultado em NUL.
