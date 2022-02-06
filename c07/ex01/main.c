#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int min = 3;
	int max = 12;
	int *ran;
	int i = 0;

	ran = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d",ran[i]);
		i++;
	}
	return 0;
}
