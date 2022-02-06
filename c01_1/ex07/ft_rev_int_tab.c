/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:11:53 by suylee            #+#    #+#             */
/*   Updated: 2020/08/03 21:25:58 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	num;
	int	rsize;

	num = 0;
	rsize = size;
	while (num < size / 2)
	{
		rsize--;
		temp = *(tab + num);
		*(tab + num) = *(tab + rsize);
		*(tab + rsize) = temp;
		num++;
	}
}
