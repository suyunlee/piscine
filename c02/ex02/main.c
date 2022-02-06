#include <stdio.h>

extern	int	ft_str_is_alpha(char *str);

int main(void)
{
	char a[] = {"Hello!"};
	char b[] = {""};;
	char c[] = {"nice to meet you"};
	char d[] = {"Hi"};

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
}
