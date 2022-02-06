#include <stdio.h>
#include <stdlib.h>

int ft_any(char **tab, int (*f)(char *));

int func(char *str)
{
	char *a = "wow";
	while (*a && *a == *str)
	{
		a++;
		str++;
	}
	if (*a == '\0')
		return (1);
	return (0);
}

int main()
{
	char **tab = (char **)malloc(sizeof(char *) * 5);
	tab[0] = "";
	tab[1] = "ab";
	tab[2] = "hello";
	tab[3] = "hi";
	tab[4] = "wow";
	printf("%d\n", ft_any(tab, &func));
	return 0;
}
