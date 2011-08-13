#include"stdio.h"

char str[10];
int re = 0;

void enqueue(char aa){
	str[re++] = aa;
}

char dequeue(void){
	int i = 0;
	char tmp;

	tmp = str[0];
	re--;
	for (; i < re; i++)
	{
		str[i] = str[i+1];
	}

	return tmp;
}

int main(int argc, char* argv[]){
	
	enqueue('a');
	enqueue('c');
	enqueue('x');
	enqueue('b');
	enqueue('d');
	printf("str[0]=%c\n",dequeue());
	printf("str[1]=%c\n",dequeue());
	printf("str[2]=%c\n",dequeue());

	return 0;

}
