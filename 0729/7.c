/*********************
 *********************
 *********************
 transfer the time
 *********************
 ********************/
#include "stdio.h"
int main(int argc, char* argv[])
{
	int i = 0;
	printf("please input the time:\n");
	scanf("%d",&i);
	
	void time(int t);
	time(i);
	return 0;
}
void time(int t)
{
	printf("time %d is %dh %dm\n",t,t/60,t%60);	
}
