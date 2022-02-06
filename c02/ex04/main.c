#include <stdio.h>

extern	int	ft_str_is_lowercase(char *str);

int main(void)
{
	char a[] = {"abdfefswefadl"};
	char b[] = {""};;
	char c[] = {"Hello"};
	char d[] = {"Hello!"};

	printf("%d\n", ft_str_is_lowercase(a));
	printf("%d\n", ft_str_is_lowercase(b));
	printf("%d\n", ft_str_is_lowercase(c));
	printf("%d\n", ft_str_is_lowercase(d));
}
