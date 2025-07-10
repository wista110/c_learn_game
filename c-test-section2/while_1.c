#include <stdio.h>
int main()
{
    int strength = 1;
    printf("腕力(strength)の初期値は%d\n", strength);
    printf("腕力を強化します\n");
    while (strength < 128)
    {
        strength = strength * 2;
        printf("腕力が%dになりました\n", strength);
    }
}