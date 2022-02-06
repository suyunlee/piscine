/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 00:41:54 by suylee            #+#    #+#             */
/*   Updated: 2020/08/08 00:39:23 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_six(char c)
{
	if (c > 15)
		ft_six(c / 16);
	if ((c % 16) < 10)
		ft_putchar(c % 16 + 48);
	else
		ft_putchar(c % 16 - 10 + 97);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 32 && *str != 127) || *str < 0)
			ft_putchar(*str);
		else
		{
			ft_putchar('\\');
			if (*str < 16)
				ft_putchar('0');
			ft_six(*str);
		}
		str++;
	}
}
