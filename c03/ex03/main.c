#include <string.h>
#include <stdio.h>

extern char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char a[20] = "Hello";
	char b[20] = "Hello";
	char c[] = " my name is";

	printf("%s\n", strncat(a, c, 2));
	printf("%s\n", ft_strncat(b, c, 2));
}
