#include <stdio.h>
#include <string.h>

extern	int	ft_strlen(char *str);

int	main()
{
	char a[] = "Hello";

	printf("%lu\n",strlen(a));
	printf("%d\n",ft_strlen(a));
}
