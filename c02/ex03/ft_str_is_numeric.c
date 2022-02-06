/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:59:58 by suylee            #+#    #+#             */
/*   Updated: 2020/08/04 17:19:05 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	index;
	int chk;

	index = 0;
	chk = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 48 && *(str + index) <= 57)
			chk += 1;
		index++;
	}
	if (chk == index)
		chk = 1;
	else
		chk = 0;
	return (chk);
}
