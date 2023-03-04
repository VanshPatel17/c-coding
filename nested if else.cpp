#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	printf("enter the value");
	scanf("%d%d%d",&a,&b,&c);
	 if(a==60)
	 {
		 if(b==60)
		 {
			 if(c==60)
			 {
				 printf("triangle is equilateral");
			 }
			 else
				 printf("triangle is not equilateral");
		 }
		 	 else
				 printf("triangle is not equilateral");
	 }
	 	 else
				 printf("triangle is not equilateral");

getch();
}