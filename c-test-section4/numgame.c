#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    int answer; //プレイヤーの答えを入れるので初期値は不要
    int r = rand() % (100 + 1); //+1 は0~99の値を1~100の値にするため
    while (1)
    {
        printf("私の思い浮かべている1~100の数を当ててください。\n");
        scanf("%d", &answer);
        if(r > answer)
        {
            printf("もっと大きい数です。\n");
        }
        else if(r < answer)
        {
            printf("もっと小さい数です。\n");
        }
        else
        {
            printf("正解です！ %d回で正解しました。\n", count);
            break;
        }
        count++;
        if(count == 10)
        {
            printf("10回間違えました。正解は%dでした。\n", r);
            break;
        }
    }
}

// 2025/07/19 ヒントだけで正解できた。 