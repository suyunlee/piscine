#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	char temp = n + '0';
	write(1, &temp, 1);
}

int main()
{
	int arr[4] = {1, 2, 3, 4};
	ft_foreach(arr, 4, &ft_putnbr);
	return 0;
}
