#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1;
	int	a;
	int sum=0;
	printf("enter the value");
	scanf("%d",&a);

	while(i<=a)
	{
		sum=sum+i;
		i++;
	}
	printf("\nsum is %d",sum);

	printf("\n end of program");

	getch();
}