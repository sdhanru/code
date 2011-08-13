#include<stdio.h>
int head;
int tail;
int arr[10];
int  length;

void enqueue(int x)
{

    arr[tail] = x;
    tail=(tail+1)%10;
    length++;

}

int dequeue(void)
{
    int c;
    c= arr[head];
    head=(head+1)%10;
    length--;
    return c;
}


int is_empty()
{

    return length==0;

}

void init_queue()
{
    head = 0;
    tail = 0;
    length=0;
}

int main(int argc, char* argv[])
{
    int i = 0;
    init_queue();
    for (i = 0; i < 10; i++)
    {

        enqueue(i);

    }

    while (!is_empty())
    {

        printf("%-4d", dequeue());

    }
    printf("\n");

    for (i = 0; i < 10; i++)
    {

        enqueue(i);

    }
    while (!is_empty())
    {

        printf("%-4d", dequeue());

    }
    printf("\n");
    return 0;
}
