#include<unistd.h>

void ft_rev()
{
	char q = 'z';

	while( q > 'a')
	{
		write(1, &q, 1);
		q--;
	}
}
int main()
{
	 ft_rev();
}
