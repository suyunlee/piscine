#include <stdio.h>

extern	int	ft_str_is_numeric(char *str);

int main(void)
{
	char a[] = {"03234025"};
	char b[] = {""};;
	char c[] = {"0 0342 342"};
	char d[] = {"00afd"};

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
}
