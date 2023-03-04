#include <stdio.h>
#include <conio.h>

void main()
{
	int arr[5];
	int i;
	printf("enter array");
	for(i=0;i<5;i++)
	{
		printf("enter value");
		scanf("%d",&arr[i]);
	}
	printf("display elements");
	for(i=0;i<5;i++)
	{
		printf("\t %d",arr[i]);
	}
	getch();
}
