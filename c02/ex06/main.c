#include <stdio.h>

extern	int	ft_str_is_printable(char *str);

int main(void)
{
	char a[] = {"HELLO"};
	char b[] = {""};;
	char c[] = {"hi Mt s#4!dl (0~"};
	char d[] = {"la\nfl L"};

	printf("%d\n", ft_str_is_printable(a));
	printf("%d\n", ft_str_is_printable(b));
	printf("%d\n", ft_str_is_printable(c));
	printf("%d\n", ft_str_is_printable(d));
}
