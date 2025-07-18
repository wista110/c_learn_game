#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    const int NUM_MAX = 99;
    int count = 0;
    int answer;
    srand((unsigned int )time(NULL));
    int rund =1 + rand() % NUM_MAX;
    printf("私の思い浮かべている 1~%d の整数を当ててください。\n", NUM_MAX);
    while (1)
    {
        printf("回答を入力してください。\n");
        scanf("%d", &answer);
        count++;
        if(rund > answer)
        {
            printf("もっと大きい数です。\n");
        }
        else if(rund < answer)
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