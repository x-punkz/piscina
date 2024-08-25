

int	count_words(char *str)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'A')
			words++;
		while (str[i] == ' ' && str[i + 1] > ' ')
		{
			words++;
			i++;
		}
		i++;
	}
	return (words);
}
#include <stdio.h>


int	main(int argc, char **argv)
{
	if (argc < 2)
		printf("%s", "Passe uma frase entre aspas "" -> ");
	printf("%d", count_words(argv[1]));
}
/*int	main(void)
{
	printf("A quantidade de palavras é %d", count_words("A barata, comeu meu chocolate."));
}*/

