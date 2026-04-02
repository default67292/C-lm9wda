#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1 );
}

void ft_comb()
{
	int a = 0;
	int b ;
	int c ;

		while(a <= 7)
		{
			b = a + 1;
			while(b <= 8)
			{
				c = b + 1;
				while(c <= 9)
				{
					ft_putchar(a + '0');
					ft_putchar(b + '0');
					ft_putchar(c + '0');
					write(1, ",", 1);
					write(1, " ", 1);
					c++;
				}
				b++;
			}
			a++;
		}
}

int main ()
{
	ft_comb();
}
