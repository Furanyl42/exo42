#include <unistd.h>

void	ft_putchar(int c);

int	main(void)
{
	ft_putchar('o');
	return 0;
}

/**/

void	ft_putchar(int c)
{
	write(1, &c, 1);
}
