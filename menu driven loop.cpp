#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,res,ch;
	float ans;
	char choice;

	do
	{
		printf("enter the value");
		scanf("%d%d",&a,&b);

		printf("enter the value");
		scanf("%d",&ch);

		printf("\n1.add\n2.sub\n3.mul\n4.div");
		switch(ch)
		{
		case 1 : res=a+b;
			printf("\nadd is=%d",res);
			break;

		case 2 : res=a-b;
			printf("\nsub is=%d",res);
			break;

		case 3 : res=a*b;
			printf("\nmul is=%d",res);
			break;

		case 4 : res=a/b;
			printf("\ndiv is=%d",res);
			break;

		default :printf(" not matching");
			     break;
		}
			printf("\ndo you want to continue,press y for yes & n for no");
			fflush(stdin);
			scanf("%c",&choice);

	}while(choice=='y' || choice=='Y');

		getch();
}
