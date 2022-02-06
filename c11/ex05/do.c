/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 16:00:39 by suylee            #+#    #+#             */
/*   Updated: 2020/08/20 09:56:10 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		(*operator(char *str))(int, int)
{
	if (str[1] != '\0')
		return (0);
	if (str[0] == '+')
		return (&add);
	if (str[0] == '-')
		return (&minus);
	if (str[0] == '/')
		return (&div);
	if (str[0] == '%')
		return (&mod);
	if (str[0] == '*')
		return (&mul);
	return (0);
}

int		check_op(int (*f)(int, int), int b)
{
	if (f == 0)
	{
		ft_putnbr(0);
		ft_putstr("\n");
		return (0);
	}
	if (f == div && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (f == mod && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int	a;
	int	b;
	int c;
	int (*f)(int, int);
	int	check;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	f = operator(argv[2]);
	check = check_op(f, b);
	if (check == 1)
	{
		c = f(a, b);
		ft_putnbr(c);
		ft_putstr("\n");
	}
	return (0);
}
