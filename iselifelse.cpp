#include <stdio.h>
#include <conio.h>

#define num 50
void main()
{
	#if(num==50)
		printf("fifty");
	#elif(num==100)
		printf("hundred");
	#elif(num==500)
		printf("five humdred");
	#else
		printf("not matching");
	#endif
		getch();
}