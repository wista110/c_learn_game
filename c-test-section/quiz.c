#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    char QUIZ[3][100] = {
        "モンスターボールを投げてモンスターを捕まえるゲームのタイトルは？",
        "スマートホンでヒットした、モンスターを引っ張って飛ばすゲームは？",
        "「DQ」の略称で知られる有名なRPGゲームの正式なタイトルは？"
    };
    // char ANS[3][30] ＜＝　30バイト
    char ANS[3][50] = {
        "ポケットモンスター", //約27バイト
        "モンスターストライク", //約30バイト
        "ドラゴンクエスト" //約24バイト
    };
    int score = 0;
    char ans[50];
    printf("クイズの答えを入力しEnterキーを押してください。\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n",QUIZ[i]);
        scanf("%s", ans);
        if (strcmp(ans, ANS[i]) == 0)
        {
            printf("正解です。\n");
            score = score + 1;
        }
        else 
        {
            printf("不正解です。答えは%sです。\n",ANS[i]);
        }
    }
    printf("あなたは%d問、正解しました。", score);
}