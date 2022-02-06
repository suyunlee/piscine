#include <stdio.h>

extern	void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int a[5] = {10, -22, 3, 42, -1};
	int i = 0;

	while (i < 5)
	{
		printf("%d ",a[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(a,5);
	i = 0;
	while (i < 5)
	{
		printf("%d ",a[i]);
		i++;
	}
}
