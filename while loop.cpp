#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	i =1;

	printf("\neven no.");
	while(i<=20)
	{
		if(i%2==0)
			printf("\neven%d",i);
		i++;
	}
	i=1;
	printf("\n odd no.");
	while(i<=20)
	{
		if(i%2!=0)
			printf("\nodd%d",i);
		i++;
	}
	printf("\n end of program");
	getch();
}