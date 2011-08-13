#include "stdio.h"
int main(int argc, char* argv[])
{
	int i = 0;

	printf("please input i");
	scanf("%d",&i);

	void my_print(int x);
	void my_prt(int x);

	my_print(i);
	my_prt(i);
	return 0;
}
void my_print(int x)
{
	for (;x >= 0; x--)
	printf("* * * * *\n");

}
void my_prt(int x)
{
	int y = 0;
	int z = x;
	for (;x > 0; x--,z=z-1)
	{for (y = 1;y<=2*z-1;y++)
	printf("* ");
	printf("\n");
	}
}
