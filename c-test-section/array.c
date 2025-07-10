#include <stdio.h>
int main()
{
    int life[3] = {1000,800, 500};
    printf("タンクの体力は%dです\n", life[0]);
    printf("戦士の体力は%dです\n", life[1]);
    printf("ヒーラーの体力は%dです\n", life[2]);
}