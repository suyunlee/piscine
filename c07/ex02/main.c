#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int ran;
	int **range;
	int i;

	ran = ft_ultimate_range(range, 3, 12);
	printf("%d\n", ran);
	i = 0;
	while (i < ran)
	{
		printf("%d ",(*range)[i]);
		i++;
	}
}
