#include <stdio.h>
#include <conio.h>

void areacircum(int,float*,float*);
void areacircum(int r,float*ar,float*cr)
{
	float a,c;
	a=3.14*r*r;
	c=2*3.14*r;
	*ar=a;
	*cr=c;
}
void main()
{
	int r;
	float area,circum;
	printf("enter radius");
	scanf("%d",&r);

	areacircum(r,&area,&circum);
	printf("area of circle %f",area);
	printf("circum of circle %f",circum);
	getch();
}