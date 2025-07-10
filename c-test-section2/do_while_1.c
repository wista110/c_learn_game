#include <stdio.h>
int main()
{
    int strength = 128;
    printf("腕力(strength)の初期値%d\n", strength);
    printf("腕力倍層の魔法をかけるぞ");
    do
    {
        strength = strength * 2;
        printf("腕力が%dになりました\n", strength);
    }
    while (strength < 128);
}