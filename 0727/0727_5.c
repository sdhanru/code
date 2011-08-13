#include "stdio.h"
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	void trans(int x, int y);

	scanf("%d,%d",&a,&b);

	trans(a,b);
}
void trans(int x, int y)
{
	int z;

	z = x;
	x = y;
	y = z;
	printf("%d,%d\n",x,y);
}
