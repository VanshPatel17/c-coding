#include <stdio.h>
#include <conio.h>

void main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	printf("students marks=%d %",a);

	if(a>=75)
		printf("\nsecured grade a");
	else if(a>=60)
		printf("\nsecured grade b");
	else if(a>=40)
		printf("\nsecured grade c");
	else if(a<=40)
		printf("\nfail");
	getch();
}