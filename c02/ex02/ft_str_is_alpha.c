/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 14:03:45 by suylee            #+#    #+#             */
/*   Updated: 2020/08/04 17:18:48 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int chk;

	index = 0;
	chk = 0;
	while (*(str + index) != '\0')
	{
		if ((*(str + index) >= 65 && *(str + index) <= 90)
				|| (*(str + index) >= 97 && *(str + index) <= 122))
		{
			chk += 1;
		}
		index++;
	}
	if (chk == index)
		chk = 1;
	else
		chk = 0;
	return (chk);
}
