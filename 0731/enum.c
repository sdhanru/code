#include <stdio.h>

enum weekday { Mon=1, Tue, Wen, Thu, Fri, Sat, Sun};

int main()
{
    int day;
    printf("Please input the day:(1~7)\n");
    scanf("%d", &day);
    switch(day)
    {
        case Mon:
            printf("Today is Monday\n");
            break;
        case Tue:
            printf("Today is Tuesday\n");
            break;
        case Wen:
            printf("Today is Wednesday\n");
            break;
        case Thu:
            printf("Today is Thursday\n");
            break;
        case Fri:
            printf("Today is Friday\n");
            break;
        case Sat:
            printf("Today is Satday\n");
            break;
        case Sun:
            printf("Today is Sunday\n");
            break;
        default:
            printf("your input is error!\n");
            break;
    }

    return 0;
}
