#include "stdio.h"
int plus(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int main ()
{
	int a,b,c;
	printf("Please input x&y:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=plus(a,b);
	printf("c=%d\n",c);
	return 0;
}
