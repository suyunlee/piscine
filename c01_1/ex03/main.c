#include <stdio.h>

extern	void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 7;
	int b = 3;
	int div;
	int	mod;

	ft_div_mod(a,b,&div,&mod);
	printf("before : div = %d, mod = %d", div, mod);
}
