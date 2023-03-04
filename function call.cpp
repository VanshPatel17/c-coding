#include <stdio.h>
#include <conio.h>


	int check(int x);
	int check(int x)
{
	if (x>=0)
		return 1;
	else
		return 0;
}
	void main()
{
		int n,res;

		printf("enter a no.");
		scanf("%d",&n);

		res=check(n);

		if(res==1)
			printf("no. is positive");
		else
			printf(" no. is negative");
		getch();
	}
