#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d,e, sum;
	float per;

	printf(" enter marks for english");
	scanf("%d",&a);

	printf(" enter marks for science");
	scanf("%d",&b);

	printf(" enter marks for maths");
	scanf("%d",&c);

	printf(" enter marks for history");
	scanf("%d",&d);

	printf(" enter marks for dsa");
	scanf("%d",&e);

	sum=a+b+c+d+e;
	printf("total marks %d",sum);

	per=sum*100/500 ;
	printf("\per of sub=%f",per);

	getch ();
}