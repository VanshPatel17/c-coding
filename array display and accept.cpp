#include<stdio.h>
#include<conio.h>

void accept(int arr[]);
void display(int arr[]);

void accept(int arr[])
{
	int i;
	printf("enter array");

	for(i=0;i<5;i++)
	{
		printf("enter value");
		scanf("%d",&arr[i]);
	}
}
void display(int arr[])
{
	int i;
	printf("display array");

	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
}
void main()
{
	int arr[5];
	accept(arr);
	display(arr);

	getch();
}