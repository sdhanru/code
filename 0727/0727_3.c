#include "stdio.h"
int max(int x, int y)
{
	int z = 0;
	
	if (x>=y)
	z = x;
	else z = y;

	return z;
}
int main(int argc, char* argv[])
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	scanf("%d,%d,%d", &a1, &a2, &a3);

	printf("In a1,a2,a3,the max is %d\n", max(max(a1, a2), a3));

	return 0;
}
