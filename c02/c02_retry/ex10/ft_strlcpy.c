/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 19:00:05 by suylee            #+#    #+#             */
/*   Updated: 2020/08/05 14:15:00 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	if (size > 0)
	{
		while (*(src + index) != '\0' && index < size - 1)
		{
			*(dest + index) = *(src + index);
			index++;
		}
	}
	*(dest + index) = '\0';
	while (*(src + index) != '\0')
		index++;
	return (index);
}
