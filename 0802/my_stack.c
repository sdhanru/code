#include "stdio.h"

enum {empty = 1, full = 0} end;
char str[10];
int re = 0;

void push(char x);
char pop(void);
int is_empty(void);

int main(int argc, char* argv[])
{
	//int arr[10];
	//int top = 0,n = 0;

	push('a');
	push('r');
	push('m');
	push('x');
	if (end == full)
		printf("str[0]= %c\n",pop());
	printf("str[1]= %c\n",pop());
	printf("str[2]= %c\n",pop());

	return 0;
}

void push(char x){
	str[re++] = x; 
}

char pop(void){
	return (str[--re]);
}

int is_empty(void){
	end = full;
	if (re == 0)
		end = empty;
	return end;
}
