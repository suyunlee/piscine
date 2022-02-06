#include <stdio.h>
#include <string.h>

extern	char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char origin[] = "BlockDMask";
	char dest1[20];
	char dest2[] = "abcdefghijklmnop";
	char dest3[] = "STRNCPY_EXAMPLE";
	char dest4[10];
	char dest5[20];
	char dest6[] = "abcdefghijklmnop";
	char dest7[] = "STRNCPY_EXAMPLE";
	char dest8[10];

	strncpy(dest1, origin, sizeof(origin));
	strncpy(dest2, origin, 13);
	strncpy(dest3, origin, 4);
	strncpy(dest4, origin, 4);
	ft_strncpy(dest5, origin, sizeof(origin));
	ft_strncpy(dest6, origin, 13);
	ft_strncpy(dest7, origin, 4);
	ft_strncpy(dest8, origin, 4);

	printf("case1 : %s\n", dest1);
	printf("case2 : %s\n", dest2);
	printf("case3 : %s\n", dest3);
	printf("case4 : %s\n", dest4);
	printf("case1 : %s\n", dest5);
	printf("case2 : %s\n", dest6);
	printf("case3 : %s\n", dest7);
	printf("case4 : %s\n", dest8);
}
