#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	printf("%d, %d\n", -4, ft_sqrt(-4));
	printf("%d, %d\n", 0, ft_sqrt(0));
	printf("%d, %d\n", 1, ft_sqrt(1));
	printf("%d, %d\n", 2147483647, ft_sqrt(2147483647));
	printf("%d, %d\n", 25, ft_sqrt(25));
	return 0;
}
