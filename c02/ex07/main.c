#include <stdio.h>

extern	char	*ft_strupcase(char *str);

int	main(void)
{
	char a[] = {"Hello My name Is"};

	ft_strupcase(a);
	printf("%s\n",a);
}
