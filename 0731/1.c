/***********************
 ***********************
 the function of (,)
 ***********************
 **********************/
#include"stdio.h"
int main(int argc, char* argv[])
{
	int x = 0;
	int y = 0;

	x=(y=3,y+1);
	printf("x=%d,y=%d\n",x,y);
	
	x=y=3;
	printf("x=%d,y=%d\n",x,y);

	x=((y=3*5,y*4),y+5);
	printf("x=%d,y=%d\n",x,y);

	return 0;
}
