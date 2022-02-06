/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 11:29:58 by suylee            #+#    #+#             */
/*   Updated: 2020/08/13 09:40:16 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	i;
	int				result;
	int				cpt;

	if (nb <= 2)
		return (2);
	result = nb;
	cpt = 1;
	while (cpt == 1)
	{
		i = 2;
		cpt = 0;
		while (i * i <= (unsigned int)result)
		{
			if ((unsigned int)result % i == 0)
			{
				cpt = 1;
			}
			i++;
		}
		if (cpt == 1)
			result++;
	}
	return (result);
}
