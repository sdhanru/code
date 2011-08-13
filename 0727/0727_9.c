/***********************
 ***********************
  三角形斜角边及计算x^n 

 ***********************
 **********************/
#include "math.h"
#include "stdio.h"
int get_tri(int x, int y){

	printf("%f\n",(float)sqrt(x*x +y*y) );		

}
	

void main()
{
	int a = 0;
	int b = 0;
	float x = 0;
	float n = 0;

	scanf("%d,%d,%f,%f",&a,&b,&x,&n);
	
	get_tri(a,b);
	printf("pow_d is %d\n",(int)pow( x, n));
	printf("pow_f is %f\n",powf( x, n));

}
