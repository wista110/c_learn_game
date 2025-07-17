#include <stdio.h>
#include <stdlib.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int r = rand() % 1000; // 0~999の乱数
        printf("敵に %d のダメージ\n", r);
    }
}