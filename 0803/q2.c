#include<stdio.h>
int head;
int tail;
int arr[10];
int is_full();
void enqueue(int x)
{
    if(is_full())
    {
        printf("队列已满，不能入队！\n");
        return;
    }
    arr[tail] = x;
    tail=(tail+1)%10;

}

int dequeue(void)
{
    int c;
    c= arr[head];
    head=(head+1)%10;
    return c;
}


int is_empty()
{

    return head==tail;
}
int is_full()
{
    return (head==(tail+1)%10);
}


void init_queue()
{

    head = 0;
    tail = 0;

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
