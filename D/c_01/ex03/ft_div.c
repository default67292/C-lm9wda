
#include<stdio.h>
void	ft_div(int a, int b, int *div, int *mod)
{
	 *div = a / b;
	 *mod = a % b;
}
int main()
{
	int a = 22;
	int b = 2;
	int div;
	int mod;
	ft_div(a , b, &div, &mod);
	printf("%d \n %d", div, mod );
		
}
