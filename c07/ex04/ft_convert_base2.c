/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:38:57 by suylee            #+#    #+#             */
/*   Updated: 2020/08/21 08:17:42 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count(char *base)
{
	int count;

	count = 0;
	while (base[count])
		count++;
	return (count);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (count(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
				|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (1);
}

int		check_atoi(char c, char *base_from)
{
	int i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		str_size(unsigned int temp, int n, int sign)
{
	unsigned int	len;

	len = 0;
	if (sign < 0)
		len = 1;
	while (1)
	{
		len++;
		if (temp / n == 0)
			break ;
		temp = temp / n;
	}
	return (len);
}
