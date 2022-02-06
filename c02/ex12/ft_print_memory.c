/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:56:06 by suylee            #+#    #+#             */
/*   Updated: 2020/08/06 14:48:39 by suylee           ###   ########.fr       */
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	ft_six(*addr);
}
