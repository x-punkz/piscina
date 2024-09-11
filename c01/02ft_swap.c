void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	seven;
	int	two;
	int	*p7;
	int	*p2;

	seven = 7;
	two = 2;
	p7 = &seven;
	p2 = &two;
	ft_swap(p7, p2);
	printf("seven %d.\n two %d.", seven, two);
}
*/
