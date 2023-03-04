#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j;

	for(j=1;j<=6;j++)
	{
		for(i=5;i>=1;i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}