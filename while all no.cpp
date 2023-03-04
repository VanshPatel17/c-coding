#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1,a;
	printf(" enter the value");
	scanf("\n%d",&a);

	while(i<=a)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}