#include <string.h>
#include <stdio.h>

extern char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char a[20] = "I love";
	char b[20] = "I love";
	char c[] = " you";

	printf("%s\n", strcat(a, c));
	printf("%s\n", ft_strcat(b, c));
}
