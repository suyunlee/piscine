/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:53:44 by suylee            #+#    #+#             */
/*   Updated: 2020/08/04 17:54:17 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int chk;

	index = 0;
	chk = 0;
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 65 && *(str + index) <= 90)
			chk += 1;
		index++;
	}
	if (chk == index)
		chk = 1;
	else
		chk = 0;
	return (chk);
}
