/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 18:18:32 by suylee            #+#    #+#             */
/*   Updated: 2020/08/04 18:20:07 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 65 && *(str + index) <= 90)
			*(str + index) += 32;
		index++;
	}
	return (str);
}
