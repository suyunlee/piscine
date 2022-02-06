#include <stdio.h>

extern	void	ft_ft(int *nbr);

int	main(void)
{
	int a = 3;

	printf("before : %d", a);
	ft_ft(&a);
	printf("after : %d", a);
}
