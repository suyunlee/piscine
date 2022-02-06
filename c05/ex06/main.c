  
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d, %d\n", -4, ft_is_prime(-4));
	printf("%d, %d\n", 0, ft_is_prime(0));
	printf("%d, %d\n", 1, ft_is_prime(1));
	printf("%d, %d\n", 2, ft_is_prime(2));
	printf("%d, %d\n", 3, ft_is_prime(3));
	printf("%d, %d\n", 11, ft_is_prime(11));
	printf("%d, %d\n", 9, ft_is_prime(9));
	return 0;
}
