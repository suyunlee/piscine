/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:29:38 by suylee            #+#    #+#             */
/*   Updated: 2020/08/16 14:00:35 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		checkchar(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int		count(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	if (checkchar(str[0], charset) == 0)
		count++;
	i = 1;
	while (str[i])
	{
		if (checkchar(str[i - 1], charset) == 1
				&& checkchar(str[i], charset) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int i, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (i < n && src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

void	ft_fill(char *str, char *charset, char **dest)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (checkchar(str[i], charset) == 1)
			i++;
		count = 0;
		while (checkchar(str[i], charset) == 0 && str[i])
		{
			count++;
			i++;
		}
		dest[j] = (char *)malloc(sizeof(char) * (count + 1));
		dest[j] = ft_strncpy(dest[j], str, i - count, i);
		j++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;

	dest = (char **)malloc(sizeof(char *) * (count(str, charset) + 1));
	ft_fill(str, charset, dest);
	dest[count(str, charset)] = 0;
	return (dest);
}
