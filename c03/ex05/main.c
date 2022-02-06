#include <string.h>
#include <stdio.h>

extern unsigned int ft_strlcat(char* dest, char* src, unsigned int size);

int	main(void)
{
	char a[50] = "hello";
	char b[50] = "hello";
	char src[] = " nice to meet you";
	
	printf("%s, %lu\n", a, strlcat(a, src, 3));
	printf("%s, %u\n", b, ft_strlcat(b, src, 3));

	printf("%s, %lu\n", a, strlcat(a, src, 8));
	printf("%s, %u\n", b, ft_strlcat(b, src, 8));
}
