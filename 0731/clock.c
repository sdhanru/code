#include <stdio.h>
#include <unistd.h>

typedef struct clock{
    int second;
    int minute;
    int hour;
}clock_t;

void update_time(clock_t *aclock)
{
    aclock->second++;
    if(aclock->second == 60)
    {
        aclock->minute++;
        aclock->second = 0;
    }
    if(aclock->minute == 60)
    {
        aclock->hour++;
        aclock->minute = 0;
    }
    if(aclock->hour == 24)
        aclock->hour = 0;

    return;
}


int main()
{
    clock_t myclock = {0};
    myclock.second = 0;
    //myclock.minute = 59;
    //myclock.hour = 23;

    while(1)
    {
        sleep(1);
        update_time(&myclock);
        printf("%02d:%02d:%02d\r", myclock.hour, myclock.minute, myclock.second);
        fflush(stdout);
    }

    return 0;
}
