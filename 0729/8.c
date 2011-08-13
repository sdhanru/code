/************************
 ************************
 ************************
    reverse the number
 ************************
 ***********************/
#include"stdio.h"
int main(int argc, char* argv[])
{
	int x = 0;
	printf("please input x\n");
	scanf("%d",&x);
	
	void my_rever(int i);

	my_rever(x);
	return 0;
}
void my_rever(int i)
{
	for(;i!=0; i=i/10)
	printf("%d",i%10);
	printf("\n");
}
