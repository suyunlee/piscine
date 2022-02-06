#include <stdio.h>
#include <string.h>

extern	int	ft_strcmp(char *s1, char *s2);

int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdaa";
	char str3[] = "abcdzz";
	char str4[] = "abcdef";
	char str5[] = "abcd";
	char str6[] = "abcdefgh";

	printf("%d ", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d ", strcmp(str1, str3));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("%d ", strcmp(str1, str4));
	printf("%d\n", ft_strcmp(str1, str4));
	printf("%d ", strcmp(str1, str5));
	printf("%d\n", ft_strcmp(str1, str5));
	printf("%d ", strcmp(str1, str6));
	printf("%d\n", ft_strcmp(str1, str6));
}
