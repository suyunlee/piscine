#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	printf("dest : %s\n\n", ft_convert_base(" -+-30", "0123456789", "0123456789abcdef"));
	printf("dest : %s\n\n", ft_convert_base("--------7fffffff", "0123456789abcdef", "01"));
	printf("dest : %s\n\n", ft_convert_base(" --+3343fse", "0123456789", "0123456789abcdef"));
	printf("dest : %s\n\n", ft_convert_base("  		--2147483648dd", "0123456789", "abcdefghij"));
	printf("dest : %s\n\n", ft_convert_base("---+--0234a", "0123456789", "0123456789"));
	printf("dest : %s\n\n", ft_convert_base("---0", "0123456789", "abcdefghij"));
}
