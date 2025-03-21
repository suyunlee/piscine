/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:54:13 by suylee            #+#    #+#             */
/*   Updated: 2020/08/01 18:39:22 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char i[5];

	i[0] = '0';
	i[3] = ',';
	i[4] = ' ';
	while (i[0] <= '7')
	{
		i[1] = i[0] + 1;
		while (i[1] <= '8')
		{
			i[2] = i[1] + 1;
			while (i[2] <= '9')
			{
				if (!(i[0] == '7' && i[1] == '8' && i[2] == '9'))
				{
					write(1, &i[0], 5);
				}
				else
					write(1, &i[0], 3);
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
