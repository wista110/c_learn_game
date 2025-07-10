#include <stdio.h>
int main()
{
    int gold = -1000;
    printf("あなたの所持金は%dです\n", gold);
    if (gold > 0)
    printf("あなたの所持金は%dあります。次の町で何かアイテムを買いませんか\n", gold);
    else if (gold < 0)
    printf("あなたは借金があります。仕事をしてお金を稼ぎましょう\n");
    else
    printf("ゴールドがありません。クエストを受けてゴールドを稼ぎましょう\n");

}