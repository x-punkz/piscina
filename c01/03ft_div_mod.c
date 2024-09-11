void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*div;
	int	*mod;
	int	resultdiv;
	int	resultmod;

	div = &resultdiv;
	mod = &resultmod;
	ft_div_mod(10, 3, div, mod);
	printf("div = %d, mod = %d", resultdiv, resultmod);
}
*/
