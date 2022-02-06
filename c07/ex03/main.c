#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *strs[7] = {
		"hello",
		"my",
		"name",
		"is",
		"suyun",
		"lee",
		"!!"
	};
	char sep[] = "+! ?";
	char *result = ft_strjoin(6, strs, sep);	
	printf("%p\n%s\n", result, result);

	return 0;
}
