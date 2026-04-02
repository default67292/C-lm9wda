#include <unistd.h>

void ft_nega (int n)
{
	if(n > 0)
	{
		write(1, "P", 1);
	}
	else if(n < 0)
	{
		write(1, "N", 1);
	}
}
int main()
{
	ft_nega(9);
}
