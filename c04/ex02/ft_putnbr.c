/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 23:15:34 by suylee            #+#    #+#             */
/*   Updated: 2020/08/05 23:17:13 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int nb)
{
	if (nb > 9)
	{
		ft_num(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = nb / 10 * -1;
		ft_putchar('-');
		ft_num(nb);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_num(nb);
	}
	else
		ft_num(nb);
}
