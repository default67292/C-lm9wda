#include <unistd.h>

void	ft_alpha(void)
{
	char	q;

	q = 'a';
	while (q < 'z')
	{
		write(1, &q, 1);
		q++;
	}
}

/*int main()
{
	 ft_alpha();
}*/
