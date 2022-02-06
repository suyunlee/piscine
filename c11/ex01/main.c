#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int func(int n)
{
	return (n + 1);
}

int	main()
{
	int	arr[4] = {13, 14, 15, 16};
	int	*result = ft_map(arr, 4, &func);
	int i;

	i = 0;
	while (i < 4)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return 0;
}
