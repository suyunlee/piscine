#include <stdio.h>
#include <stdlib.h>

void ft_sort_string_tab(char **tab);

int main()
{
	char **tab = (char **)malloc(sizeof(char *) * 5);
	tab[0] = "hello";
	tab[1] = "hel";
	tab[2] = "hel";
	tab[3] = "hello";
	tab[4] = 0;
	ft_sort_string_tab(tab);
	for(int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);
	free(tab);

	return 0;
}
