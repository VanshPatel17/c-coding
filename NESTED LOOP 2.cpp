#include <stdio.h>
#include <conio.h>

void main()
{
		int i,j;

	for(j=5;j>=1;j--)
	{
		for(i=5;i>=j;i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	for(j=5;j>=1;j--)
	{
		for(i=5;i>=j;i--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	
	getch();
}