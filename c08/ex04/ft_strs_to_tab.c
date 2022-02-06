/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:52:27 by suylee            #+#    #+#             */
/*   Updated: 2020/08/12 22:02:15 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					count(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char				*ft_copy(char *str)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (count(str) + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = count(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_copy(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
