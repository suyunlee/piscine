/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:56:25 by jkeum             #+#    #+#             */
/*   Updated: 2020/08/02 14:44:12 by jkeum            ###   ########.fr       */
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
			if ((c == 1 && r == 1) || (x != 1 && y != 1 && c == x && r == y))
				ft_putchar('A');
			else if ((c == x && r == 1) || (c == 1 && r == y))
				ft_putchar('C');
			else if ((c > 1 && c < x) && (r == 1 || r == y))
				ft_putchar('B');
			else if ((r > 1 && r < y) && (c == 1 || c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
		ft_putchar('\n');
	}
}
