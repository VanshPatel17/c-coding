#include <stdio.h>
#include <conio.h>

void main()
{
	int i=1;
	float si,p,n,r;

	do
	{
		printf("enter the value p,n,r");
		scanf("%f%f%f",&p,&n,&r);

			si=p*n*r/100;

				printf("simple interest=%f",si);
				i++;
	}
	while(i<=3);
	getch();
}
