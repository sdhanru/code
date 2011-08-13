#include"stdio.h"

int  factioal(int a);

int main(){
	int n;
	scanf("%d",&n);

	printf("n!=%d\n",factioal(n));
	return 0;
}

int factioal(int a)
{
	int f;
	if (a==0||a==1)
		f = 1;
	else f = a*factioal(a-1);
	
	return f;
}

