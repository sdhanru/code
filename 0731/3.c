/***********************
 ***********************
 关于数组能够赋值的探讨
 ***********************
 **********************/
#include"stdio.h"
int main(int argc, char*argv[])
{
	//int ar[10] = {1,2,3,4,5,6,7,8,9,10},
	int i = 0;
	char tmp;
	char *ptr;
	char a[20] = {"dawei"};
	char arr[20] = {"xiaom"};
	
	ptr = arr;
	//strcpy(a,arr);
	//for (i= 0; i < 10; i++){
	//scanf("%d",&ar[i]);
	//}
	printf("%d\n",sizeof(ptr));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[1]));
	printf("%s\n",a);
	printf("%s\n",arr);
	//printf("%s\n",a);

	for (i=0; i < 3; i++){
	tmp = a[i];
	a[i] = a[4-i]; 
	a[4-i] = tmp;
	}

	printf("%s\n",a);

	//for (i=0; i < 10; i++){
	//printf("%d\n",ar[i]);
	//}

	return 0;
}
