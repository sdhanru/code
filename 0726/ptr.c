#include "stdio.h"
int main(int argc, char* argv[]){

	int arr[] = {6,7,8,9,10};
	int* ptr = arr;

	*(ptr++) = 123;
	(*ptr++) = 123;

	printf("%d\n%d\n",*ptr,*(++ptr));

	return 0;
	
}
