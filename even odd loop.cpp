#include <stdio.h>
#include <conio.h>

void main()
{
	int i,ecount=0,ocount=0;

	for(i=1;i<=20;i++)
	{
		if(i%2==0)
			ecount++;
		else
			ocount++;
	}
	printf("\nno. of even no. is %d",ecount);
	printf("\nno. of odd no. is %d",ocount);
	getch();
}