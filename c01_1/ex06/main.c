#include <stdio.h>

extern	int	ft_strlen(char *str);

int	main(void)
{
	char str[] = {"hello!"};

	printf("%d",ft_strlen(str));
}
