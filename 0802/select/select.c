#include"stdio.h"
#include"unistd.h"

int main (int argc, char* argv[])
{
	int arr[8] = {1, 2, 4, 4, 9, 8, 0, 7};
	int i = 0, j = 0, k = 0;
	int tmp = 0;

	//change arr[]
	for(;i<8; i++)
	{
		k = i;
		for (j=i+1; j<8; j++)
			if (arr[j]> arr[k])
				k = j;
		if(i!=k)
		{
			tmp = arr[i];
			arr[i] = arr[k];
			arr[k] = tmp;
		}
	}

	//print arr[]
	for (i=0; i<8; i++)
	{
		printf("%d\r",arr[i]);
		sleep(1);
		fflush(stdout);
	}

	return 0;
}
