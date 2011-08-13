#include <stdio.h>

int arr[10];
int top;

void push(int n)
{
    arr[top] = n;
    top++;

    return;
}

int pop()
{
    return arr[--top];
}

int is_empty()
{
    return (top == 0);
}

void init_stack()
{
    top = 0;

    return;
}

int main()
{
    int i;

    init_stack();
    for(i = 0; i < 8; i++)
        push(i);

    while(!is_empty())
    {
        printf("%d ", pop());
    }
    printf("\n");

    return 0;
}
