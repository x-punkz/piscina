#include <stdlib.h>
#include <stdio.h>

int	get_len(int value)
{
	int	len = 1;

	while(value > 9)
	{
		value /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nb)
{
	int	i;
        int     nb_len;
	char	*nb_str;

        if (nb == -2147483648)
        {
		nb_len = get_len(nb * -1) + 1;
		nb_str = (char *)malloc(sizeof(char) * nb_len);
		nb_str = "-2147483648\0";
		return (nb_str);
	
        }
	if (nb < 0)
	{
		nb_len = get_len(nb * -1) + 1;
		nb_str = (char *)malloc(sizeof(char) * nb_len);
		nb *= -1;
		nb_str[0] = '-';
	}
	else
	{
		nb_len = get_len(nb);
		nb_str = (char *)malloc(sizeof(char) * nb_len);
	}
	i = nb_len;
	while(nb > 9)
	{
		if (i == nb_len)
		{
			nb_str[i] = '\0';
		}
		else
		{
			nb_str[i] = nb % 10 + 48;
			nb /= 10;
		}
		i--;
	}
	nb_str[i] = nb % 10 + 48;

	return (nb_str);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	char *str = ft_itoa(atoi(av[1]));
	printf("%s\n",str);
}
