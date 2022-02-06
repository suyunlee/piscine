#include <stdio.h>

extern	char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",str);
	ft_strcapitalize(str);
	printf("%s\n",str);
}
