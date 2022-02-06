/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:44:44 by suylee            #+#    #+#             */
/*   Updated: 2020/08/11 16:13:57 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_count;

int		possible(int *que, int row)
{
	int i;
	int abs;

	i = 0;
	while (i < row)
	{
		abs = que[row] - que[i];
		if (abs < 0)
			abs *= -1;
		if (que[row] == que[i] || row - i == abs)
			return (0);
		i++;
	}
	return (1);
}

void	queen(int *que, int row)
{
	int		i;
	char	c;

	if (row == 10)
	{
		g_count++;
		i = 0;
		while (i < 10)
		{
			c = que[i] + '0';
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		return ;
	}
	i = 0;
	while (i < 10)
	{
		que[row] = i;
		if (possible(que, row))
			queen(que, row + 1);
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int	que[10];

	queen(que, 0);
	return (g_count);
}
