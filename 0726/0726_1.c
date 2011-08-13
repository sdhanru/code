#include "stdio.h"
int main( int argc, char* argv[])
{
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	int a = 0;
	printf("%d\n",sizeof a);
	return 0;
}
