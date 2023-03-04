#include <stdio.h>
#include <conio.h>

void main()
{
	int p,n,r,i=1;
	float si;
	
	while(i<=3)
	{
		printf(" enter the value");
		scanf("%d%d%d",&p,&n,&r);

		si=p*n*r/100;
		printf("\nsimple interest=%f",si);
		i++;
	}
	getch();
}