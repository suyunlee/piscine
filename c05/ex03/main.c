/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 09:38:23 by suylee            #+#    #+#             */
/*   Updated: 2020/08/10 09:39:46 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main()
{
	printf("%d\n", ft_recursive_power(-2, -2));
	printf("%d\n", ft_recursive_power(-2, 0));
	printf("%d\n", ft_recursive_power(-2, 2));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(5, 5));
}
