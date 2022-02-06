/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 20:11:53 by suylee            #+#    #+#             */
/*   Updated: 2020/08/05 21:49:06 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dcount;
	unsigned int	scount;
	unsigned int	nb;

	dcount = ft_count(dest);
	scount = ft_count(src);
	if (size > dcount + 1)
	{
		nb = size - dcount - 1;
		dest = dest + dcount;
		while (*src && nb > 0)
		{
			*dest = *src;
			src++;
			dest++;
			nb--;
		}
		*dest = '\0';
	}
	if (size > dcount)
		return (dcount + scount);
	else
		return (size + scount);
}
