void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	f = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[f];
		tab[f] = temp;
		i++;
		f--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	size;
	int	intArray[] = {1, 2, 3, 4, 5, 6};

	i = 0;
	size = 6;
	ft_rev_int_tab(intArray, size);
	while (i < size)
	{
		printf("%d", intArray[i]);
		i++;
	}
	printf("\n");
}
*/
