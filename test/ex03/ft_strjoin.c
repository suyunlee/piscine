/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 23:20:01 by suylee            #+#    #+#             */
/*   Updated: 2020/08/12 10:07:59 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_size(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		len += count(strs[i]);
		i++;
	}
	len += count(sep) * (size - 1) + 1;
	str = (char *)malloc(sizeof(char) * len);
	return (str);
}

void	ft_strcpy(int size, char **strs, char *str, char *sep)
{
	int i;
	int j;
	int n;

	i = 0;
	n = 0;
	while (n < size)
	{
		j = 0;
		while (strs[n][j])
		{
			str[i] = strs[n][j];
			i++;
			j++;
		}
		j = 0;
		while (sep[j] && n != size - 1)
		{
			str[i] = sep[j];
			i++;
			j++;
		}
		n++;
	}
	str[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *str;

	str = ft_size(size, strs, sep);
	ft_strcpy(size, strs, str, sep);
	return (str);
}
