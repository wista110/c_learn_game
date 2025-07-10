#include <stdio.h>
int main()
{
    int strength = 1200;
    int defense = 1200;
    printf("あなたの筋力ステータスは%dです\n", strength);
    printf("あなたの防御ステータスは%dです\n", defense);
    if (strength > 1000 && defense > 1000)
    printf("あなたは一人前の戦士になりました\n");
    else printf("もっと修業しましょう\n");
}