#include <stdio.h>
int main()
{
    int life = 500;
    printf("体力(life)の初期値は%dです\n", life);
    life = life + 50;
    printf("体力増加、%dになった\n", life);
    life = life - 70;
    printf("ダメージを受けた、%dになった\n", life);
    life = life * 3;
    printf("魔法を使い体力が3倍になった、%d\n", life);
    life = life / 2;
    printf("敵の呪いで体力が半分になった、%d\n", life);
}