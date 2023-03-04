#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c;
	printf("enter the value ");
	scanf("%d%d%d",&a,&b,&c);

	if (a==b || a==c || b==c)
		printf("the triangle is isosceles");
	else
		printf("not isosceles");
	getch();
}