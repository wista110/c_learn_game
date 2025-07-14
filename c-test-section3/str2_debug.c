#include <stdio.h>
int main()
{
    printf("Step1: 配列初期化\n");
    char title[12] = "Holy Dragon";

    printf("Step2: 文字変更前: %s\n", title);
    title[4] = '+';

    printf("Step3: 文字変更後: %s\n", title);
    printf("Step4: 文字出力開始\n");

    for (int i = 0; i < 11; i++){
        printf("%c,", title[i]);
    }
    printf("\n");
}