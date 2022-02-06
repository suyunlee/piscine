#include <stdio.h>
#include <string.h>

extern	char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char origin[] = "BlockDMask";
//	char dest1[10];
//	char dest2[10];
	char dest3[20];
	char dest4[20];
	char dest6[] = "STRCPY_EXAMPLE";
	char dest7[] = "STRCPY_EXAMPLE";

	//strcpy(dest1, origin);
	//ft_strcpy(dest2, origin);
	strcpy(dest3, origin);
	ft_strcpy(dest4, origin);
	strcpy(dest6, origin);
	ft_strcpy(dest7, origin);

//	printf("case1 : %s\n", dest1);
//	printf("case1 : %s\n", dest2);
	printf("case2 : %s\n", dest3);
	printf("case2 : %s\n", dest4);
	printf("case3 : %s\n", dest6);
	printf("case3 : %s\n", dest7);
	printf("end");
}

