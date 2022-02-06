extern	void	ft_putnbr(int nb);
extern	void	ft_putchar(char c);

int	main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
