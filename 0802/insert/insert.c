#include"stdio.h"

void insert(int a[8]);

int main(int argc, char* argv[])
{
	int arr[8] = {3,6,2,7,4,9,2,1};

	insert(arr);
	return 0;
}

void insert(int a[8])
{
	int i = 0, j = 0, key = 0;

	for (j = 1 ; j<8; j++)
	{
		key = a[j];
		for (i=j+1; i>=0&&a[i]<a[j]; i--)
		{a[i+1] = a[i];}
		a[i+1] = key;
	}
	for (i=0 ;i<8 ;i++)
	printf("%d\n",a[i]);
}
