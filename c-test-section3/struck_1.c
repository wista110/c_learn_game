#include <stdio.h>
struct CHARACTER
{
    char name[10];
    int life;
    int strength;
    int defense;
};

int main()
{
    struct CHARACTER player = {"マーズ", 1000, 500, 300};
    printf("プレイヤーのパラメーターを出力します。\n");
    printf("名前 :%s\n", player.name);
    printf("体力 :%d\n", player.life);
    printf("攻撃力 :%d\n", player.strength);
    printf("防御力 :%d\n", player.defense);
    return 0;
}