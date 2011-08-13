#include"stdio.h"
int main(int argc, char* argv[])
{
	int x = 0;

	printf("please input i\n");
	scanf("%d",&x);

	void add_i(int i);
	void add_j(int j);
	
	add_i(x);
	add_j(x);
	return 0;
}
void add_i(int i)
{
	int sum = 0;

	for(;i >= 1; i--)
	{
	sum = sum + i;	
	}

	printf("%d\n",sum);
}
	
void add_j(int j)
{
	int sum_j = 0;

	for(;j >= 1; )
	{
	sum_j = sum_j + j;	
	j = j - 2;
	}
	printf("%d\n",sum_j);
}
