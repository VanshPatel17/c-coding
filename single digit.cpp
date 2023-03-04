#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	printf("enter a single digit no.");
	scanf("%d",&a);

	if(a==0)
		printf("\nzero");
	else if(a==1)
		printf("\none");
	else if(a==2)
		printf("\ntwo");
	else if(a==3)
		printf("\nthree");
	else if(a==4)
		printf("\nfour");
	else if(a==5)
		printf("\nfive");
    else if(a==6)
		printf("\nsix");
	else if(a==7)
		printf("\nseven");
	else if(a==8)
		printf("\neight");
	else if(a==9)
		printf("\nnine");
	else
		printf("not single digit no.");
	
	getch();
}