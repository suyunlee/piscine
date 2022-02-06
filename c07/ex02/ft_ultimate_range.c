/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 21:50:59 by suylee            #+#    #+#             */
/*   Updated: 2020/08/10 22:48:53 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int ran;

	ran = max - min;
	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = (int*)malloc(sizeof(int) * ran)))
	{
		*range = 0;
		return (-1);
	}
	while (i < ran)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (ran);
}
