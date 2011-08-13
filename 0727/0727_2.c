/*******************
 *who is the maxium
 ******************/
#include "stdio.h"
int max(int x, int y)
{
	int z = 0;

	if (x >= y)
	z = x;
	else z = y;

	return z;
}
int main(int argc,char* argp[]) {
	
	int m = 0;
	int n = 0;	

	scanf("%d,%d",&m,&n);

	printf("The maxium is %d\n", max(m, n));

	return 0;
}
