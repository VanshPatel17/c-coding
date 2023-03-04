#include <stdio.h>
#include <conio.h>

#define cube(n)(n*n*n) 
void main()
{
	int n,res;
	printf("enter value");
	scanf("%d",&n);

	res=cube(n);
	printf("cube=%d",res);
	getch();
}