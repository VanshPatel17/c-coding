#include <stdio.h>
#include <conio.h>
int sumofnumber(int i);
int sumofnumber(int i)
{
	int sum;
	sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		
	}
	return sum;
}
void main()
{
	int i,sum;
	i=1;
	printf("the  first 10 natural no.:");
	printf("%d",i);
	sum=sumofnumber(i);
	printf("the  first 10 natural no.=%d",sum);

	getch();
}


