#include"stdio.h"
#include"string.h"

int main(int argc, char*argv[])
{
	char a1[20] = {"who are you"};
	char a2[20];

	strcpy(a2,a1);
	puts(a2);
	puts("I am \0weizige");
	//strcpy(a1,a2);
	puts(a1);
	puts("I am weizige");

	return 0;
}
