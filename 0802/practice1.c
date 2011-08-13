#include"stdio.h"
int main(void){
	int a[15] = {1,2,3,5,6,7,8,9,0,11,22,33,44,55,66};
	int i = 0,j = 14,tmp = 0;

	for (i=0; i<15; i++)
	{
		if (a[i]%2 == 0)
		for ( ; j>0; )
		{
			if (a[j]%2 != 0)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				break;
			}

		--j;
		}
	}

	for (i=0; i<15; i++)
	printf("%d\n",a[i]);

	return 0;
}
