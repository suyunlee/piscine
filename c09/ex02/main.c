#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main()
{
	int		index;
	char	**split;

//	split = ft_split("  a  b   b   ", " a   ");
	split = ft_split("AaBbCCcDDDdDDDeAAAfEA", "abcdef");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
			index++;
	}
}
