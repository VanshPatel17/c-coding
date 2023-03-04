#include <stdio.h>
#include <conio.h>


	int check(int x);
	int check(int x)
{
	if (x%2==0)
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
			printf("no. is even");
		else
			printf("no. is odd");
		getch();
}
