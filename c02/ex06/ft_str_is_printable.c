/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:57:13 by suylee            #+#    #+#             */
/*   Updated: 2020/08/04 17:59:36 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;
	int chk;

	index = 0;
	chk = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 32 && *(str + index) <= 126)
			chk += 1;
		index++;
	}
	if (chk == index)
		chk = 1;
	else
		chk = 0;
	return (chk);
}
