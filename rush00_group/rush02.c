/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 12:24:51 by jkeum             #+#    #+#             */
/*   Updated: 2020/08/02 14:51:33 by jkeum            ###   ########.fr       */
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
			if ((c == 1 || c == x) && r == 1)
				ft_putchar('A');
			else if ((c == x || c == 1) && r == y)
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
