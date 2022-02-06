#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));
int my_func(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	if (i == j)
		return (0);
	if (i > j)
		return (1);
	return (-1);
}

int main()
{
	int size = 15;
	char **tab = (char **)malloc(sizeof(char *) * (size + 1));

	tab[0] ="EyWjaceYO";
	tab[1] ="JGl9HzKWBYV";
	tab[2] ="jsBOM";
	tab[3] ="EfU5ajAGH";
	tab[4] ="KR3";
	tab[5] ="0rL5zvuU";
	tab[6] ="Pezg";
	tab[7] ="qQjC47oBb";
	tab[8] ="ikgL";
	tab[9] ="N";
	tab[10] ="BMUuJjr";
	tab[11] ="tInjlFc";
	tab[12] ="eHr";
	tab[13] ="zfu09Sr";
	tab[14] ="A3mIjzo";
	tab[15] = 0;

	ft_advanced_sort_string_tab(tab, &my_func);
	for(int i = 0; tab[i]; i++)
		printf("%s\n", tab[i]);
	return 0;
}
