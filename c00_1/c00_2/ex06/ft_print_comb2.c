/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 00:17:01 by suylee            #+#    #+#             */
/*   Updated: 2020/08/02 16:47:57 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(int a, int b)
{
	char	com[5];

	com[0] = a / 10 + 48;
	com[1] = a % 10 + 48;
	com[2] = ' ';
	com[3] = b / 10 + 48;
	com[4] = b % 10 + 48;
	write(1, &com[0], 5);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c[2];

	c[0] = ',';
	c[1] = ' ';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comb(a, b);
			if (!(a == 98 && b == 99))
			{
				write(1, &c[0], 2);
			}
			b++;
		}
		a++;
	}
}
