#include <stdio.h>
#include <time.h>
int main()
{
    char dayofweek[][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
    time_t t = time(NULL);
    struct tm* now = localtime(&t);
    printf("%d/%d/%d/ %s %d:%d:%d\n",
        now->tm_year + 1900,
        now->tm_mon + 1,
        now->tm_mday,
        dayofweek[now->tm_wday],
        now->tm_hour,
        now->tm_min,
        now->tm_sec);
}