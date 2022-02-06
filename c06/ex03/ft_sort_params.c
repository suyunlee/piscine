/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 14:23:10 by suylee            #+#    #+#             */
/*   Updated: 2020/08/18 13:51:55 by suylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ovcount(int *ord, int argc, int k)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (i < argc - 1)
	{
		if (ord[i++] == k)
			count++;
	}
	count = count + k;
	return (count);
}

void	index_st(int *ord, int argc, int *temp)
{
	int	i;
	int	k;
	int	count;

	k = 0;
	while (++k < argc)
	{
		count = ovcount(ord, argc, k);
		i = -1;
		while (++i < argc - 1)
		{
			if (ord[i] == k)
			{
				while (k < count)
				{
					temp[k - 1] = i + 1;
					k++;
				}
				k--;
				break ;
			}
		}
	}
}

void	ft_sort(int argc, char **argv, int *ord, int *temp)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i < argc)
	{
		ord[i - 1] = 1;
		j = 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] && argv[i][k] == argv[j][k])
				k++;
			if (argv[i][k] > argv[j][k])
				ord[i - 1] += 1;
			j++;
		}
		i++;
	}
	index_st(ord, argc, temp);
}

int		main(int argc, char **argv)
{
	int ord[argc - 1];
	int temp[argc - 1];
	int i;
	int j;

	ft_sort(argc, argv, ord, temp);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[temp[i]][j])
		{
			write(1, &argv[temp[i]][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
