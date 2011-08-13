#include "stdio.h"
#include "common.h"
void sort (char a[8]){
	int i = 0,j = 0,t = 0;

	for (; i<7; i++)
	 for (j=0; j<7-i; j++)
	  if(a[j]>a[j+1])
	  {t=a[j];a[j]=a[j+1];a[j+1]=t;}
	
	for ( i=0; i<=7; i++)
	printf("%d\n",a[i]);
}
