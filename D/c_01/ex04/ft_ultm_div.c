#include<stdio.h>

void	ft_ultm_div(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = mod;
}
int main()
{
	int a = 7;
	int b = 7;
	ft_ultm_div(&a , &b);
	printf("%d \n %d" , a , b );

}
