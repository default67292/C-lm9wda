#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a , int *b)
{
	int t = *a;
	*a = *b;
	*b = t;	
}
int main()
{
	int r  = 3;
	int t  = 7;

	ft_swap(&r,&t);
	printf("%d %d", r,t);
}
