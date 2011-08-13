#include"stdio.h"

int eu(int a, int b);

int main(int argc, char*argv[])
{
	int x = 0, y = 0;
	scanf("%d %d",&x,&y);

	printf("%d&%d'gcd is %d\n", x, y, eu(x, y));

	return 0;
}

int eu(int a, int b){
	int e;
	if(a%b==0)
		e = b;
	else
		e = eu( b, a%b);
	
	return e;
}
