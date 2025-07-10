#include <stdio.h>
int main()
{
    int strength = 100;
    int intelligense = 0;
    printf("あなたの腕力は%dです。\n", strength);
    printf("あなたの知能は%dです。\n", intelligense);
    if (strength > 100 || intelligense > 100)
    printf("あなたは戦士か魔導士になれます\n");
    else if (strength < 100 && intelligense < 100)
    printf("もう少し鍛えましょう\n");
    else 
    printf("鍛えてステータスをあげましょう\n");
}