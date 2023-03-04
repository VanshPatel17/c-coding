#include <stdio.h>
#include <conio.h>

void main()
{
	int i,n,rem,sum=0;

	printf("enter 4 digit");
	scanf("%d",&n);
	i=n;
	for (;n!=0;n=n/10)
	{
		rem=n%10;
		sum=sum+rem;
	}
	printf("\naddition of %d is %d",i,sum);
	getch();
}