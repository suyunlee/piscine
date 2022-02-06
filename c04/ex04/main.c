#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	int a = -20;
	int b = -2147483648;
	int c = 30;
	char base[] = "0123456789abcdef";
	char base1[] = "0123456789";
	char base2[] = "abcdefghij";
	char base3[] = "dfjkwldr";
	char base4[] = "qwert+yu";
	char base5[] = "ab defghij";
	ft_putnbr_base(a, base);
	printf("\n");
	ft_putnbr_base(b, base);
	printf("\n");
	ft_putnbr_base(c, base);
	printf("\n");
	ft_putnbr_base(b, base1);
	printf("\n");
	ft_putnbr_base(a, base2);
	printf("\n");
	ft_putnbr_base(a, base3);
	printf("\n");
	ft_putnbr_base(a, base4);
	printf("\n");
	ft_putnbr_base(a, base5);
	printf("\n");
	
	return (0);
}

