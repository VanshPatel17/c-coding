#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
    int sum;
	int area;
	int square;

	printf("enter 1 value");
	scanf("%d",&a);

	printf("enter 2 value");
	scanf("%d",&b);
	sum=a-b;
	printf("\nsum of 2 no.=%d",sum);

	area=a*b;
	printf("\narea of rectangle=%d",area);

	square=a/b;
	printf("\narea of square=%d",square);

	getch();
}