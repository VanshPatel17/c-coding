#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[5];
	printf("enter elements");

	for(i=0;i<5;i++)
	{
		printf("enter value");
		scanf("%d",arr+ i);
	}
	printf("\ndisplay arr");
	for(i=0;i<5;i++)
	{
		printf("\t%d",*(arr+i));
	}
	getch();
}