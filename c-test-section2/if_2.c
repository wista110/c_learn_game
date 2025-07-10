#include <stdio.h>
int main()
{
    int score = 5000;
    if (score > 10000) printf("あなたのスコアは%dです\n", score);
    else printf("あなたのスコアは%dです。1万点までがんばろう！\n", score);
    score = score + 10000;
    if (score > 10000) printf("あなたのスコアは%dです\n", score);
    else printf("あなたのスコアは%dです。1万点までがんばろう！\n", score);
}