/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 09:48:11 by suylee            #+#    #+#             */
/*   Updated: 2020/08/21 08:16:20 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				check_base(char *base);
int				check_atoi(char c, char *base_from);
int				count(char *base);
int				str_size(unsigned int temp, int n, int sign);

unsigned int	ft_int(char *nbr, char *base_from, int i)
{
	unsigned int	temp;
	int				j;
	int				n;

	temp = 0;
	n = count(base_from);
	while (check_atoi(nbr[i], base_from) != 0)
	{
		j = 0;
		while (j < n)
		{
			if (nbr[i] == base_from[j])
				temp = temp * n + j;
			j++;
		}
		i++;
	}
	return (temp);
}

char			*ft_base(char *base_to, unsigned int temp, int sign)
{
	int		n;
	int		i;
	int		len;
	char	*str;

	n = count(base_to);
	len = str_size(temp, n, sign);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (sign < 0)
	{
		str[0] = '-';
		i = 1;
	}
	while (i < len)
	{
		str[len - i - !(sign < 0)] = base_to[temp % n];
		temp = temp / n;
		i++;
	}
	str[len] = '\0';
	return (str);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	temp;
	int				i;
	int				sign;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (0);
	i = 0;
	while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	sign = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	temp = ft_int(nbr, base_from, i);
	if (temp == 0)
		sign = 1;
	return (ft_base(base_to, temp, sign));
}
