#include <stdio.h>
#include <conio.h>

#define msg printf("i hate u");
void main()
{
#undef msg
	msg;

	getch();
}