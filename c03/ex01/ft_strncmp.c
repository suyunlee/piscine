/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:39:26 by suylee            #+#    #+#             */
/*   Updated: 2020/08/06 12:46:55 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				cmp;

	index = 0;
	if (n != 0)
	{
		while (index < n - 1 && *s1 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
			index++;
		}
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
	}
	else
		cmp = 0;
	return (cmp);
}
