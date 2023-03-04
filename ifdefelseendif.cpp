#include <stdio.h>
#include <conio.h>

#define msg printf("i hate u");
void main()
{
	#ifdef msg
		printf("\nmacro is defined");
		msg;
	#else
		printf("macro not defined");
	#endif
		getch();
}