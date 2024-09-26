#include "libft.h"  // ft_putchar_fd fonksiyonu için gerekli
#include <stdio.h>  // printf ve perror için gerekli

int main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(5, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(1236, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-5, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-235, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-10, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
}
