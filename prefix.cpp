#include<stdio.h>
#include<conio.h>

void main()
{
	int x=8,y;

	y = -x;
	printf("\nNegation of x is %d" ,y);

	y = ++x;                    //prefix
	printf("\nx = %d",x);
	printf("\ny = %d",y);

	y= x--;                     //postfix
	printf("\nx = %d",x);
	printf("\ny = %d",y);

	y= --x;                     //prefix
	printf("\nx = %d",x);
	printf("\ny = %d",y);

	y= x++;                     //postfix
	printf("\nx = %d",x);
	printf("\ny = %d",y);

	printf("\nsize of int is %d bytes",sizeof(x));
	getch();
}


	