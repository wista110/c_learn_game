#include <stdio.h>
int main()
{
    int life[3][5] = {
        {1000, 800, 500, 300, 100},
        {-50, -70, -30, -80, -100},
        {12, 34, 56, 78, 90},
    };
    printf("MAP[0][0]は%dです\n", life[0][0]);
    printf("MAP[1][2]は%dです\n", life[1][2]);
    printf("MAP[2][4]は%dです\n", life[2][4]);
}