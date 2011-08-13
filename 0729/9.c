/**********************
 **********************
	 get n!
 **********************
 *********************/
#include "stdio.h"
int main(int argc, char* argv[])
{
	int n;
	printf("please input n\n");
	scanf("%d",&n);
	
	void get_(int n);
	get_(n);
	printf("\n");
	return 0;
}
void get_(int n)
{
	int all = 1;
	for(;n>0;n--)
	all=all*n;
	printf("The resualt is %d",all);
}
