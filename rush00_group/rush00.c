/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 16:56:25 by jkeum             #+#    #+#             */
/*   Updated: 2020/08/02 14:49:48 by jkeum            ###   ########.fr       */
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
			if ((r == y || r == 1) && (c == 1 || c == x))
				ft_putchar('o');
			else if ((c > 1 && c < x) && (r == 1 || r == y))
				ft_putchar('-');
			else if ((r > 1 && r < y) && (c == 1 || c == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			c++;
		}
		c = 1;
		r++;
		ft_putchar('\n');
	}
}
