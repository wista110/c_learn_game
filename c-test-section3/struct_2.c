#include <stdio.h>
struct CHARACTER
{
    char name[20];
    int life;
    int strength;
    int defense;
};

struct CHARACTER enemy[3] =
{
    {"スライム", 200, 80, 30},
    {"スケルトン", 500, 240, 120},
    {"ドラゴン", 3000, 800, 300}   
};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("------------\n");
        printf("%s\n", enemy[i].name);
        printf("体力:%d\n", enemy[i].life);
        printf("攻撃力:%d\n", enemy[i].strength);
        printf("防御力:%d\n", enemy[i].defense);
        
    }
    printf("------------\n");
}
