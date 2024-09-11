void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	temp;

	i = 0;
	f = 1;
	while(i < size)
	{
		while (f < size)
		{
			if(tab[i] > tab[f])
			{	
				temp = tab[i];
				tab[i] = tab[f];
				tab[f] = temp;
			}
			f++;
		}
		i++;
		f = i + 1;
	}
}

#include <stdio.h>

int	main(void)
{
	int	i;
	int	array[] = {5, 3, 6, 2, 4, 1};
	int	size;

	i = 0;
	size = 6;
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}
