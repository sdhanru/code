#include"stdio.h"

long fi(int n);

int main(int argc, char* argv[])
{
	int a = 0;

	scanf("%d",&a);

	printf("fi(n)=%ld\n",fi(a));
	return 0;
}


long fi(int n){
	long i = 0;

	if (n==0||n==1)
	i = 1;
	else i=fi(n-1)+ fi(n-2);

	return i;

}
