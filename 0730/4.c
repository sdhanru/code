#include"stdio.h"
#include"unistd.h"
void main(){
	while(1){
	sleep(1);	
	printf("yes\r");
	fflush(stdout);	
	}
}
