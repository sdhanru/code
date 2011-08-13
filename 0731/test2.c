#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[20];
    char *depart; 
    int id;
    int salary;
}employee_t;

int main()
{
    int i;
    employee_t arr[3];
    for(i = 0; i < 3; i++)
    {
        arr[i].depart = (char *)malloc(20);
        scanf("%s %s %d %d", arr[i].name, arr[i].depart,  &(arr[i].id), &arr[i].salary);
    }

    for(i = 0; i < 3; i++)
    {
        printf("the employees are:\n");
        printf("Name:%s, Dep:%s, Id:%d, Salary:%d\n",
            arr[i].name, arr[i].depart, 
            arr[i].id, arr[i].salary);
    }
    for(i = 0; i < 3; i++)
        free(arr[i].depart);
    return 0;
}
