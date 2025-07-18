#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    int answer;
    int rnd = 1 + rand() % 99;
    printf("私の思い浮かべている0~99の数を当ててください。\n");
    while (1)
    {
        printf("回答を入力してください。\n");
        scanf("%d", &answer);
        count++;
        if(rnd > answer)
        {
            printf("もっと大きい数です。\n");
        }
        else if(rnd < answer)
        {
            printf("もっと小さい数です。\n");
        }
        else
        {
            printf("正解です！ あなたは%d回で正解しました。\n", count);
            break;
        }
    }
}
