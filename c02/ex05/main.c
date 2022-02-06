#include <stdio.h>

extern	int	ft_str_is_uppercase(char *str);

int main(void)
{
	char a[] = {"HELLO"};
	char b[] = {""};;
	char c[] = {"LaLaLA"};
	char d[] = {"la fl L"};

	printf("%d\n", ft_str_is_uppercase(a));
	printf("%d\n", ft_str_is_uppercase(b));
	printf("%d\n", ft_str_is_uppercase(c));
	printf("%d\n", ft_str_is_uppercase(d));
}
