#include <unistd.h>

void	ft_print_comb2(void)
{
	int	p;
	int	s;
	int	t;
	int	q;

	p = '0';
	s = '0';
	t = '0';
	q = '1';

	while(p <= '9')
	{
		while(s <= '9')
		{
			while (t <= '9')
			{
				while(q <= '9')
				{
					write(1, &p, 1);
					write(1, &s, 1);
					write(1, " ", 1);
					write(1, &t, 1);
					write(1, &q, 1);
					q++;
					if (p >= '9' && s >= '8')
						write(1, "\n", 1);
					else
						write(1, ", ", 2);
				}
				t++;
				if (q == ';')
					q = s + 1;
				else if (t == ':' && q >= '9')
					q = s + 2;
				else
					q = '0';
			}
			t = p;
			s++;
		}
		s = '0';
		p++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
