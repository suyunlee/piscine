/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 09:08:53 by suylee            #+#    #+#             */
/*   Updated: 2020/08/08 10:24:21 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_count(char *base)
{
	char	*temp;
	int		count;

	count = 0;
	temp = base;
	while (*temp)
	{
		if (*temp == 43 || *temp == 45)
			return (1);
		temp++;
		count++;
	}
	return (count);
}

int		ft_twice(char *base)
{
	int	n;
	int	i;
	int	j;

	j = 0;
	i = 0;
	n = ft_count(base);
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_basesystem(int nbr, char *base, int n)
{
	if (nbr == -2147483648)
	{
		ft_basesystem(nbr / n, base, n);
		ft_putchar(base[2147483648 % n]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_basesystem(-nbr, base, n);
	}
	else
	{
		if (nbr > n - 1)
			ft_basesystem(nbr / n, base, n);
		ft_putchar(base[nbr % n]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = ft_count(base);
	if (*base == '\0' || n <= 1 || ft_twice(base) == 1)
		return ;
	else
		ft_basesystem(nbr, base, n);
}
