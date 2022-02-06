/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 22:40:50 by suylee            #+#    #+#             */
/*   Updated: 2020/08/08 23:23:44 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count(char *base)
{
	char	*temp;
	int		count;

	count = 0;
	temp = base;
	while (*temp)
	{
		temp++;
		count++;
	}
	return (count);
}

int	ft_unvaild(char *base)
{
	int	n;
	int	i;
	int	j;

	i = 0;
	n = ft_count(base);
	if (base[0] == '\0')
		return (1);
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (base[i] == base[j])
				return (2);
			j++;
		}
		if (base[i] == 43 || base[i] == 45 || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
			return (3);
		i++;
	}
	return (0);
}

int	ft_basesystem(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int	check(char c, char *base)
{
	char *temp;

	temp = base;
	while (*temp)
	{
		if (c == *temp)
			return (1);
		temp++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	temp;
	int	sign;
	int	count;

	sign = 1;
	temp = 0;
	count = ft_count(base);
	if (ft_unvaild(base) != 0)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	if (check(*str, base) != 1)
		return (0);
	while (check(*str, base) == 1)
	{
		temp = temp * count + ft_basesystem(*str, base);
		str++;
	}
	return (sign * temp);
}
