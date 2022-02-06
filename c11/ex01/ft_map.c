/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 08:44:18 by suylee            #+#    #+#             */
/*   Updated: 2020/08/17 09:51:30 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	index;

	result = (int *)malloc(sizeof(int) * length);
	if (result == 0)
		return (0);
	index = 0;
	while (index < length)
	{
		result[index] = (*f)(tab[index]);
		index++;
	}
	return (result);
}
