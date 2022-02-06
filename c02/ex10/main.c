#include <stdio.h>
#include <string.h>

extern	unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char *str;
	char str2[2];
	char str3[2];
	int  a;
	int b;

	str = "Hello";
	a = strlcpy(str2, str, 3);
	printf("strlcpy : %s, %d\n", str2, a);
	b = ft_strlcpy(str3, str, 3);
	printf("ft_strlcpy : %s, %d\n", str3, b);
}
