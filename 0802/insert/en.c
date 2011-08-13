#include"stdio.h"
enum we{sunday,monday,tudesday,wednesday,thursday,friday,saturday};

int main(int argc, char*argv[])
{
	int d;
	enum we week;

	scanf("%d",&d);

	switch(d)
	{
		case 1:week = monday;break;
		case 2:week = tudesday;break;
		case 3:week = wednesday;break;
		case 4:week = thursday;break;
		case 5:week = friday;break;
		case 6:week = saturday;break;
		case 7:week = sunday;break;
	}
	switch(week)
	{
		case  monday:printf("It is 1\n");break;
		case  tudesday:printf("It is 2\n");break;
		case  wednesday:printf("It is 3\n");break;
		case  thursday:printf("It is 4\n");break;
		case  friday:printf("It is 5\n");break;
		case  saturday:printf("It is 6\n");break;
		case  sunday:printf("It is 7\n");break;
	}

	return 0;
}
