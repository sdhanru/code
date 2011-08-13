/*******************
 Get the greastest
 common divisor
 ******************/
#include "stdio.h"
int main(int argc, char* argv[])
{
	int x = 0, y = 0;

	scanf("%d,%d",&x,&y);

	void get_gcd(int m, int n);

	get_gcd(x,y);
	return 0;
}
void get_gcd(int m, int n)
{
	int i=1,e=1;
	if (m<0||n<0)				/*如果ab有负数，error*/
	printf("error\n");

	for (;i<=m; i++)
	{
	 if(m%i == 0&& n%i == 0) 
	  {
	    e=i; 
	   printf("%d\t",e);
	  }
	}
	 printf("it is %d\n ",e);
}
