#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,res,ch;
	printf("enter 2 value");
	scanf("%d%d",&a,&b);

	printf("enter choice");
	printf("\n1.add\n2.sub\n3.mul\n4.div");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1 : res= a+b;
		printf("add 2 no. is %d",res);
		break;
    case 2 : res= a-b;
		printf("sub 2 no. is %d",res);
		break;
	case 3 : res= a*b;
		printf("mul 2 no. is %d",res);
		break;
	case 4 : res= a/b;
		printf("div 2 no. is %d",res);
		break;

	default : printf("entered wrong choice");
	}
	getch();
}