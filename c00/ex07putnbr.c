#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	putnbr(int nb)
{
	char	nbr;
	char	signal;

	signal = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		putnbr(nb / 10);//abre uma nova funcao com o resultado.
		putnbr(nb % 10);//apos retornar da funcao acima,faz o msm nessa.
	}
	else
		nbr = nb + '0';//nb + 48,p dar o valor do char na ascii. 
	ft_putchar(nbr);
}

int	main(void)
{
	putnbr(-2147);	
}
