#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_num()
{
	int a = 0;

	while(a <= 9 )
	{
		ft_putchar(a + '0' );
		a++;
	}
}

int main()
{
	ft_num();
}
