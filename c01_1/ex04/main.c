#include <stdio.h>

extern	void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 7;
	int b = 3;

	printf("before : a:%d, b:%d",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf("after : a:%d, b:%d",a,b);

}
