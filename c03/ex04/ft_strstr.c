/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 18:38:16 by suylee            #+#    #+#             */
/*   Updated: 2020/08/06 18:41:24 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *stemp;
	char *ftemp;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			stemp = str;
			ftemp = to_find;
			while (*to_find && *str == *to_find)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (stemp);
			else
				str--;
			to_find = ftemp;
		}
		str++;
	}
	return (0);
}
