int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (nb == i * i)
		{
			return (i);
			break ;
		}
		i++;
	}
	return (0);
}
