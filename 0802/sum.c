#include"stdio.h"

long sum(int x); 

int main(int argc, char* argv[])
{
	int a;
	scanf("%d",&a);

	printf("sum(%d)=%ld\n",a,sum(a));

	return 0;
}


long sum(int x){ 
	long s = 0;
	if(x==1)
		s = 1;
	else
		s = x+sum(x-1);
	
	return s;
}

