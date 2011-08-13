#include "stdio.h"
#include "unistd.h"
struct time{
	int hour;
	int minute;
	int sec; 
};
int main(int argc, char* argv[])
{
	int time;
	int i;
	
	struct time t1={23,58,57};

	for (i = t1.sec;t1.hour<24;i++){
	t1.sec = i%60;
	printf("%02d:%02d:%02d\r",t1.hour,t1.minute,t1.sec);
	fflush(stdout);
	sleep(1);
	if(i%60==0&&i!=0) {t1.minute+=1;}
	if(t1.minute%60==0&&t1.minute!=0) t1.hour+=1;
	if(t1.hour==24) break;
	}
}
