#include <stdio.h>
#include <conio.h>

void swap(int*p1,int*p2);
void swap(int*p1,int*p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

void main()
{
	int x=200,y=300;
	printf("\n values before swapping xis %d & y id %d",x,y);
	swap(&x,&y);

	printf("\n values after swapiing x is %d & y is %d",x,y);
	getch();
}