/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 09:57:28 by suylee            #+#    #+#             */
/*   Updated: 2020/08/02 11:41:09 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

void			linex(int a, char c, char d)
{
	int	i;

	if (a != 0)
	{
		ft_putchar(c);
		if (a >= 2)
		{
			i = 1;
			while (i <= a - 2)
			{
				ft_putchar('B');
				i++;
			}
			ft_putchar(d);
		}
	}
}

void			liney(int a, int b)
{
	int	i;
	int	j;

	if (b >= 3)
	{
		i = 1;
		while (i <= b - 2)
		{
			ft_putchar('\n');
			ft_putchar('B');
			if (a > 2)
			{
				j = 1;
				while (j <= a - 2)
				{
					ft_putchar(' ');
					j++;
				}
				ft_putchar('B');
			}
			i++;
		}
	}
}

void			rush04(int a, int b)
{
	linex(a, 'A', 'C');
	liney(a, b);
	if (b != 1)
	{
		ft_putchar('\n');
		linex(a, 'C', 'A');
	}
}
