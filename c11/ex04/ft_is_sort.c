/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:27:36 by suylee            #+#    #+#             */
/*   Updated: 2020/08/19 09:51:07 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int check;

	i = 0;
	check = 0;
	while (i < length - 1 && check == 0)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			check = 1;
		i++;
	}
	if (check == 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
