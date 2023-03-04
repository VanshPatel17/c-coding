#include <stdio.h>
#include <conio.h>

void main()
{
	int i,a,fact=1;
	i=1;
	printf("the value of a=");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("\n%d",fact);
	getch();
}
