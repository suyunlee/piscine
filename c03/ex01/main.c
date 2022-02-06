#include <stdio.h>
#include <string.h>
extern int ft_strncmp(char* str1, char* str2, unsigned int n);

int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdaa";
	char str3[] = "abcdzz";
	char str4[] = "";

	printf("%d ", strncmp(str1, str2, 1));			// 0
	printf("%d\n", ft_strncmp(str1, str2, 1));		// 0

	printf("%d ", strncmp(str1, str2, 10));			// 1
	printf("%d\n", ft_strncmp(str1, str2, 10));		// 1

	printf("%d ", strncmp(str1, str2, 5));			// 1
	printf("%d\n", ft_strncmp(str1, str2, 5));		// 1
	
	printf("%d ", strncmp(str1, str3, 5));			// -1
	printf("%d\n", ft_strncmp(str1, str3, 5));		// -1

	printf("%d ", strncmp(str1, str3, 4));			// 0
	printf("%d\n", ft_strncmp(str1, str3, 4));		// 0

	printf("%d ", strncmp(str1, str2, 4));			// 0
	printf("%d\n", ft_strncmp(str1, str2, 4));		// 0

	printf("%d ", strncmp(str1, str2, 0));			// 0
	printf("%d\n", ft_strncmp(str1, str2, 0));		// 0

	printf("%d ", strncmp(str1, str4, 3));			// 0
	printf("%d\n", ft_strncmp(str1, str4, 3));		// 0
	
	printf("%d ", strncmp(str1, str4, -1));			// 0
	printf("%d\n", ft_strncmp(str1, str4, -1));		// 0
}
