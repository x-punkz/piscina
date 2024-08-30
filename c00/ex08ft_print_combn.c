#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_array(char v[], int size, int last)
{
	int	i;

	i = 0;
	if (v[0] == last)
	{
		while (i < size)
			ft_putchar(v[i++]);
		write(1, ".\n", 2);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}
void ft_print_combn(int n)
{
	char	v[10];//v é vetor.
	char	v_max[10];
	int	flag;
	int	base;
	int	i;

	if (n <= 0 || n > 10)
	{
		write(1, "insert an 0 < n < 10\n", 21);
		return ;
	}
	i = 0;
	while (i < n)
	{//eu crio o estado inicial e final que quero alcançar.
		v[i] = i + 48;
		v_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_array(v, n, v_max[0]);//print p checkar o vetor

	//Quando v[0] tem seu valor maximo, eu sei que terminei, pq esta é a ultima config possivel.
	while (v[0] != v_max[0])
	{
		//encontro a posiçao do int que pode ser aumentada.
		//assumimos inicialmente que ele está na última posição para cada interação.
		flag = n - 1;
		while (v[flag] == v_max[flag])
			flag--;
		//acrescesnta + 1 no valor de atual de flag e salvo na minha base
		base = ++(v[flag]);
		//defina os seguintes numeros corretamente.
		while (flag < n)//ou n - 1,que é mais certo,mas da no msm
			//a posicao de flag +1 = posicao de base + 1 
			v[flag++] = base++;
		print_array(v, n, v_max[0]);
	}
}

int	main(void)
{
	ft_print_combn(3);
/*
 //para testar todas as possibilidades,só desmarcar os comentarios
	ft_print_combn(0);
	write(1, "\n1 ->\n",6);
	ft_print_combn(1);
	write(1, "\n2 ->\n", 6);
	ft_print_combn(2);
	write(1, "\n3 ->\n",  6);
	ft_print_combn(3);
	write(1, "\n4 ->\n", 6);
	ft_print_combn(4);
	write(1, "\n5 ->\n", 6);
	ft_print_combn(5);
	write(1, "\n6 ->\n", 6);
	ft_print_combn(6);
	write(1, "\n7 ->\n", 6);
	ft_print_combn(7);
	write(1, "\n8 ->\n", 6);
	ft_print_combn(8);
	write(1, "\n9 ->\n", 6);
	ft_print_combn(9);
	write(1, "\n10 ->\n", 6);
	ft_print_combn(10);
	write(1, "\nThe End\n", 9);
*/
}


