/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 22:11:13 by suylee            #+#    #+#             */
/*   Updated: 2020/08/12 22:50:31 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_size(int size)
{
	if (size > 9)
		print_size(size / 10);
	ft_putchar(size % 10 + '0');
}

void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		print_str(par[i].str);
		ft_putchar('\n');
		print_size(par[i].size);
		ft_putchar('\n');
		print_str(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
