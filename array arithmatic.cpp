#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5]={5,10,15,20,25};
	int*p1;
	int*p2;
	int res;
	p1=&arr[0];
	p2=&arr[2];

	printf("add in p1 %d",p1);
	p1++;
	arr[0]=arr[0]++;
	printf("\nadd aftr increment %d",p1);

	p1=p1+2;
	printf("\nadd aftr increment by 2 %d",p1);

	printf("\nadd in p2 %d",p2);
	p2=p2--;
	printf("\nadd aftr decrement %d",p2);

	p2=p2-3;
	printf("\nadd aftr decrement by 3 %d",p2);

	res=*p1+*p2;
	getch();
}