#include <stdio.h>

int main()
{
    char *p = "hello world";
    char name[] = "hello world";

    //*(p + 3) = 'H';
    printf("sizeof(p)=%d, sizeof(name)=%d\n", 
        sizeof p, sizeof(name));

    printf("p=%s\n", p);
    printf("name=%s\n", name);

    return 0;
}
