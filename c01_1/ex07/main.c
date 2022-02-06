#include <stdio.h>

extern	void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int a[5] = {3,61,7,22,34};
	int i = 0;

	printf("before : ");
	while ( i < 5)
	{
		printf("%d ",a[i]);
		i++;
	}

	ft_rev_int_tab(a,5);
	printf("after : ");
	i = 0;
	while ( i < 5)
	{
		printf("%d ",a[i]);
		i++;
	}
}
