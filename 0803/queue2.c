#include"stdio.h"

char str[5];
int head = 0;
int tail = 0;

void enqueue(char aa);
char dequeue(void);
//int is_empty(void);
int is_empty();

int main(int argc, char* argv[]){

	enqueue('a');
	enqueue('m');
	enqueue('x');
	enqueue('b');
	enqueue('b');

	while (!is_empty())
		printf("%c\n",dequeue());
	//printf("\n");
	
	//printf("\n");
	//if (!is_empty)
	//	printf("%c\n",dequeue());
	//if (is_empty)
	//	printf("%c\n",dequeue());

	return 0;
}


void enqueue(char aa){
	//int i = 0
		str[head++] = aa;
}

char dequeue(void){
	return str[tail++];
}

int is_empty(){
	return tail == head;
}
