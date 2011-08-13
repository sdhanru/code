#include"stdio.h"
void pt_size(char ptr[]){
	printf("%d\n",sizeof(ptr) );
	printf("%c\n",ptr[2] );
	printf("%c\n",*++ptr );
	//printf("%c\n",str[10]);
}
int main(int argc, char*argv[])
{
	char arr[10] = {"hello"};
	char brr[2] ;
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(brr));
	pt_size(arr);


	return 0;
}
