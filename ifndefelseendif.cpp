#include <stdio.h>
#include <conio.h>

void main()
{
	#ifndef msg
		printf(" macro is not defined,defining it here");
	#else
		printf("macro is defined");
		msg;
	#endif

		getch();
}