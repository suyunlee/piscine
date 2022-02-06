/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 17:57:51 by suylee            #+#    #+#             */
/*   Updated: 2020/08/03 16:24:07 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_comb(int i, int n, char com[], int index)
{
	while (i <= 10 - n)
	{
		com[index] = i + 48;
		if (n > 1 && n < 10)
		{
			ft_comb(i + 1, n - 1, com, index + 1);
		}
		else if (n == 1)
		{
			write(1, &com[0], index + 1);
			if (!(com[index] = '9' && com[0] == 9 - index + 48))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	com[n];

	ft_comb(0, n, com, 0);
}
