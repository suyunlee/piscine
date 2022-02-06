/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 12:31:20 by suylee            #+#    #+#             */
/*   Updated: 2020/08/02 12:34:20 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

void			rush(int x, int y)
{
	int c;
	int r;

	c = 1;
	r = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			if ((c == 1 && r == 1) || ((x != 1 && y != 1) && c == x && r == y))
				ft_putchar('/');
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar('\\');
			else if ((c > 1 && c < x) && (r == 1 || r == y))
				ft_putchar('*');
			else if ((r > 1 && r < y) && (c == 1 || c == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
		ft_putchar('\n');
	}
}
