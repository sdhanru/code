#include "stdio.h"
int main(int argc, char* argv[])
{
	int x;

	printf("please input x\n");
	scanf("%d",&x);

	void my_abs(int m);

	my_abs(x);

	return 0;
}

void my_abs(int m)
{
	if (m < 0)
	m = -m;
	printf("%d",m);
}
