#include<stdio.h>

void ft_ulmt(int *********lit)
{
	*********lit = 42;
}
int main()
{
	int i;
	int *lit = &i;
	int **lit1 = &lit;
	int ***lit2 = &lit1;
	int ****lit3 = &lit2;
	int *****lit4 = &lit3;
	int ******lit5 = &lit4;
	int *******lit6 = &lit5;
	int ********lit7 = &lit6;
	int *********lit8 = &lit7;

	ft_ulmt(lit8);
	printf("%d", i);
}
