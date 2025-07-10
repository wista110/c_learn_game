#include <stdio.h>
int main()
{
    int life = 1;
    printf("あなたの体力は%dです\n", life);
    if (life > 0) printf("生きています\n");
    life = life - 1;
    if (life == 0) printf("死んでいます\n");
    life = life - 1;
    if (life < 0) printf("アンデッドになりました\n");
}