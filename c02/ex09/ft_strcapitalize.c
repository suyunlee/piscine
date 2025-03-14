/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:08:21 by suylee            #+#    #+#             */
/*   Updated: 2020/08/05 12:23:32 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		while (!((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65
					&& str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)
					|| str[i] == 0))
			i++;
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			i++;
		}
		else if (str[i] != 0)
			i++;
		while ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65
					&& str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			i++;
		}
	}
	return (str);
}
