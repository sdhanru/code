/****************
 ****************
 wait
 ***************/
#include "stdio.h"
void change_num(int* x, int* y)
{
	int* z;
	
	z = x;
	x = y;
	y = z;
}

int main(int argc, char* argv[])
{
	int m;
	int n;

	scanf("%d",&m);
	scanf("%d",&n);

	change_num(m, n);

	printf("Change m&n is %d %d", *m, *n);

	return 0;
}
