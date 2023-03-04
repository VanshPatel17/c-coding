#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c,d;
	printf("the value");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a==b && b==c && c==d && d==a)
		printf("shape is square");
	else
		printf("shape is not square");
	getch();
}