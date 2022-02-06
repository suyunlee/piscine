#include <stdio.h>

extern	void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 3;
	int b = 5;

	printf("before : a = %d, b = %d\n",a,b);
	ft_swap(&a,&b);
	printf("before : a = %d, b = %d\n",a,b);
}
