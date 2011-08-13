#include "stdio.h"
void get_y(int x)
{
	if (x<1) printf("%d",x);
	if (x>=1&&x<10) printf("%d",2*x-1);
	if (x>=10) printf("%d",3*x-11);
}
int main(int argc, char* argv[])
{
	int x = 0;
	void get_y(int x);

	scanf("%d",&x);

	get_y(x);
	return 0;
}
