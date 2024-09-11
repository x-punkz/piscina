void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	*div;
	int	*mod;

	n1 = 20;
	n2 = 3;
	div = &n1;
	mod = &n2;
	ft_ultimate_div_mod(div, mod);
	printf("div = %d.\nmod = %d.", n1, n2);
}
*/
