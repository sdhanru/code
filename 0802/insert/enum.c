#include"stdio.h"
enum da {a1day,a2day,a3day,a4day,a5day};

int main(int argc, char *argv[])
{
	int a;

	enum da day;
	scanf("%d",&a);
	switch (a)
	{
		case 1:day = a1day;break;
		case 2:day = a2day;break;
		case 3:day = a3day;break;
		case 4:day = a4day;break;
		case 5:day = a5day;
	}

	switch (day)
	{
		case a1day:printf("It is day1\n");break;
		case a2day:printf("It is day2\n");break;
		case a3day:printf("It is day3\n");break;
		case a4day:printf("It is day4\n");break;
		case a5day:printf("It is day5\n");break;
	}

	return 0;
}
