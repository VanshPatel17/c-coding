#include <stdio.h>
#include <conio.h>

int factorial(int n);
int factorial(int n)
{
	int fact=1;
	if(n==1)
		return 1;
	else
		fact=n*factorial(n-1);
	return(fact);
}
void main()
{
	int n=3,res;
	res=factorial(n);
	printf("factorial of n is %d",res);
	getch();
}
