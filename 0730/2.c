#include "stdio.h"

enum my_date{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
	enum my_date week;

int main(int argc, char* argv[]){

	int i = 0;
	printf("Please input i:\n");
	scanf("%d",&i);

	switch(i){
	 case 1: week = Monday;break;
	 case 2: week = Tuesday;break;
	 case 3: week = Wednesday;break;
	 case 4: week = Thursday;break;
	 case 5: week = Friday;break;
	 case 6: week = Saturday;break;
	 case 7: week = Sunday;
	}

	switch(week){
	 case Monday:printf("Today is Monday.\n");break;
	 case Tuesday:printf("Today is Tuesday.\n");break;
	 case Wednesday:printf("Today is Wednesday.\n");break;
	 case Thursday:printf("Today is Thursday.\n");break;
	 case Friday:printf("Today is Friday.\n");break;
	 case Saturday:printf("Today is Saturday.\n");break;
	 case Sunday:printf("Today is Sunday.\n");
	}

	return 0;
}
