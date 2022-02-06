/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 08:08:11 by suylee            #+#    #+#             */
/*   Updated: 2020/08/17 08:08:18 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	main(int argc, char **argv)
{
	char str1[20];
	char str2[21];
	char str3[19];
	int	n;
	int	fd;
	unsigned char	buf[1024];


	str1 = "File name mising.\n";
	str2 = "Too many arguments.\n";
	str3 = "Cannot read file.\n";

	if (argc == 1)
	{
		write(1, str1, 20);
		return (0);
	}
	if (argc >= 3)
	{
		write(1, str2, 21);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, str3, 19);
		return (0);
	}
	while ((n = read(fd, but, 1024)) > 0)
		write(1, buf, n);
	close(fd);
	if (n < 0)
		return (-1);
	return (0);
}
