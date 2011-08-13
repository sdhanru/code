#include "stdio.h"

int main(int argc, char*argv[])
{

	int a[10] = {7,63,54,-78,31,42,83,142,57,-20};
	int i = 0, j = 0;
	int tmp = 0;

	for (; j<2; j++)	
	{
		for (i = 0; i<10-j; i++)
		{
			if(a[i]>a[i+1])		
			{
				tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;

			//	printf("%d\n",a[i]);
			}
		}
		//if (j == 2)
		//printf()
	}
	printf("%d\n",a[8]);
	//printf("%d\n",a[9]);
	//for (i=0; i<10; i++)
	//printf("%d\n",a[i]);
	
	return 0;
}
