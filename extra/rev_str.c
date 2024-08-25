#include <unistd.h>

char	rev_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		write(1, "Passe a palavra a ser revertida.", 33);
	rev_str(av[1]);
}
/*int	main(void)
{
	rev_str("daniel");
}*/
