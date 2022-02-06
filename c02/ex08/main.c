#include <stdio.h>

extern	char	*ft_strlowcase(char *str);

int	main(void)
{
	char a[] = {"Hello My name Is"};

	ft_strlowcase(a);
	printf("%s\n",a);
}
