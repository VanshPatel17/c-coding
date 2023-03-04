#include<stdio.h>
#include<conio.h>

void main()
{
	int h;
	int b;
	int l;
	float area;
	float area2;
	float area3;

	printf("enter value of h");
	scanf("%d",&h);

	printf("\n enter value of b");
	scanf("%d",&b);

	printf("\n enter value of l");
	scanf("%d",&l);

	area=(float) 1/2*b*h;
	
	printf("area of triangle %f",area);
	

	area2=l*b;
	printf("\narea of rectangle %f",area2);
	

	area3=area+area2;
	printf ("\ntotal area %f",area3);
	

	getch();
}
