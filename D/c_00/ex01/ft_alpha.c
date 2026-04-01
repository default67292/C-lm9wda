#include <unistd.h>

void ft_alpha()
{
	char q = 'a';

	while(q < 'z')
	{
		write(1, &q, 1);
		q++;
	}
}
int main()
{
	 ft_alpha();
}
