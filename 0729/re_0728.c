#include "stdio.h"
void change_num(char x, char y)
{
	y = x + y;
	x = y - x;
	y = y - x;
	printf("%c,%c\n",x,y);
}
int main(int argc, char* argv[])
{
	char a;
	char b;
	scanf("%c,%c",&a,&b);
	change_num(a,b);
	return 0;
}
