#include <stdio.h>

int ft_atoi_base(char *str, char *base);
int ft_unvaild(char *base);

int		main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	printf("%d\n", ft_atoi_base("01010110", "01"));
	printf("%d\n", ft_atoi_base("-3f234", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("  	 -+---3f234", "0123456789abcdef"));
//	printf ("%d\n", ft_unvaild("0123456789"));
//	printf ("%d\n", ft_unvaild("01"));
//	printf ("%d\n", ft_unvaild("0123456789abcdef"));
}
