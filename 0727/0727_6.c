#include "stdio.h"
void exchange_double( int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("%d,%d\n",a,b);
}
int main(int argc, char* argv[])
{
	int a = 0; int b = 0;
	
	scanf("%d,%d",&a,&b);

	exchange_double( a, b);
	return 0;
}
