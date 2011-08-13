#include "stdio.h"
void leap(int n)
{
        if(n%4 == 0||n%100 != 0|| n%400 == 0)
        printf("%d is a leap year\n",n);
        else
        printf("%d is a common year\n",n);
}
int main(int argc, char *argv[])
{
	char c;
	printf("sizeof=%d\n",sizeof c);
        int x = 0;
        printf("please input x\n");
        scanf("%d",&x); 
        leap(x);
        return 0;
}
